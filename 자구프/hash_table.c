//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// data ////////////////////////////////////////////////////
//typedef struct hash_table HashTable;
//typedef struct bucket Bucket;
//typedef struct item Item;
//typedef char Key;
//typedef char Value;
//
//struct hash_table {
//	Bucket *bucket;
//	size_t numBucket;
//};
//
//struct bucket {
//	Item *itemList;
//};
//
//struct item {
//	Key key;
//	Value value;
//	Item *next;
//};
//
//// public interface //////////////////////////////////////////
//HashTable *newHashTable(size_t bucketSize);
//void freeHashTable(HashTable *);
//void insert(HashTable *, Key, Value);
//Item *search(HashTable *, Key, Value);
//void printHashTable(HashTable *);
//
//// private functions /////////////////////////////////////////
//Item *newItem(Key, Value);
//size_t hashFunction(Key);
//void swapChar(char *, char *);
//
//// main //////////////////////////////////////////////////////
//int main(int argc, char *argv[]) {
//	HashTable *ht;
//	FILE *fin, *fout;
//	size_t numVertex, numEdge;
//	size_t numPair = 0;
//	Key k;
//	Value v;
//
//	// check argument
//	if (argc != 3) {
//		printf("please input {exe} {input file name} {output file name}\n");
//		return -1;
//	}
//
//	ht = newHashTable(13); // bucket을 13개만 사용 (A~N)
//	fin = fopen(argv[1], "r");
//	fout = fopen(argv[2], "w");
//
//	fscanf(fin, "%d %d", &numVertex, &numEdge);
//	for (size_t i = 0; i < numEdge; i++) {
//		fscanf(fin, " %c %c", &k, &v);
//		// 항상 key가 더 작아야 한다.
//		if (k > v)
//			swapChar(&k, &v);
//		// key:value 가 없으면 insert
//		if (search(ht, k, v) == NULL) {
//			insert(ht, k, v);
//			continue;
//		}
//		// 있으면 양방향
//		numPair++;
//		fprintf(fout, "%c %c\n", k, v);
//	}
//	fclose(fin);
//	printHashTable(ht);
//
//	fprintf(fout, "%d\n", numPair);
//	fclose(fout);
//	freeHashTable(ht);
//	return 0;
//}
//
//// public interface //////////////////////////////////////////
//
//// 해시테이블 동적할당
//// 각 버킷의 프론트 아이템은 더미 노드로 생성
//HashTable *newHashTable(size_t bucketSize) {
//	HashTable *ht = (HashTable *)malloc(sizeof(HashTable));
//	ht->bucket = (Bucket*)malloc(sizeof(Bucket) * bucketSize);
//	ht->numBucket = bucketSize;
//	for (size_t i = 0; i < bucketSize; i++)
//		ht->bucket[i].itemList = newItem(0, 0); // dummy node
//	return ht;
//}
//
//// 해시테이블 동적해제
//void freeHashTable(HashTable *ht) {
//	Item *tempItem, *iterItem;
//	for (size_t i = 0; i < ht->numBucket; i++) {
//		iterItem = ht->bucket[i].itemList;
//		while (iterItem != NULL) {
//			tempItem = iterItem;
//			iterItem = iterItem->next;
//			free(tempItem);
//		}
//	}
//	free(ht->bucket);
//	free(ht);
//}
//
//// 아이템 해시테이블에 삽입
//void insert(HashTable *ht, Key k, Value v) {
//	size_t hash = hashFunction(k);
//	Item *item = newItem(k, v);
//	Item *list = ht->bucket[hash].itemList;
//	item->next = list->next;
//	list->next = item;
//}
//
//// 해당 key: value가 해시테이블에 있는지 확인
//// return: Item (없으면 NULL)
//Item *search(HashTable *ht, Key k, Value v) {
//	size_t hash = hashFunction(k);
//	Item *iterItem = ht->bucket[hash].itemList->next;
//	for (; iterItem != NULL; iterItem = iterItem->next)
//		if (iterItem->key == k && iterItem->value == v)
//			break;
//	return iterItem;
//}
//
//// 디버깅용 프린트
//void printHashTable(HashTable *ht) {
//	Item *iter;
//	printf("bucket size: %d\n", ht->numBucket);
//	for (size_t i = 0; i < ht->numBucket; i++) {
//		printf("[%2d] ", i);
//		iter = ht->bucket[i].itemList->next;
//		for (; iter != NULL; iter = iter->next)
//			printf("(%c, %c) ", iter->key, iter->value);
//		printf("\n");
//	}
//}
//
//// private functions /////////////////////////////////////////
//// 아이템 동적할당
//Item *newItem(Key k, Value v) {
//	Item *item = (Item*)malloc(sizeof(Item));
//	item->key = k;
//	item->value = v;
//	item->next = NULL;
//	return item;
//}
//
//// 문자를 활용한 해시 함수
//size_t hashFunction(Key k) {
//	static const Key A = 'A';
//	return (size_t)(k - A);
//}
//
//void swapChar(char *c1, char *c2) {
//	char temp = *c1;
//	*c1 = *c2;
//	*c2 = temp;
//}
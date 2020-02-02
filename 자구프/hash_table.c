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
//	ht = newHashTable(13); // bucket�� 13���� ��� (A~N)
//	fin = fopen(argv[1], "r");
//	fout = fopen(argv[2], "w");
//
//	fscanf(fin, "%d %d", &numVertex, &numEdge);
//	for (size_t i = 0; i < numEdge; i++) {
//		fscanf(fin, " %c %c", &k, &v);
//		// �׻� key�� �� �۾ƾ� �Ѵ�.
//		if (k > v)
//			swapChar(&k, &v);
//		// key:value �� ������ insert
//		if (search(ht, k, v) == NULL) {
//			insert(ht, k, v);
//			continue;
//		}
//		// ������ �����
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
//// �ؽ����̺� �����Ҵ�
//// �� ��Ŷ�� ����Ʈ �������� ���� ���� ����
//HashTable *newHashTable(size_t bucketSize) {
//	HashTable *ht = (HashTable *)malloc(sizeof(HashTable));
//	ht->bucket = (Bucket*)malloc(sizeof(Bucket) * bucketSize);
//	ht->numBucket = bucketSize;
//	for (size_t i = 0; i < bucketSize; i++)
//		ht->bucket[i].itemList = newItem(0, 0); // dummy node
//	return ht;
//}
//
//// �ؽ����̺� ��������
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
//// ������ �ؽ����̺� ����
//void insert(HashTable *ht, Key k, Value v) {
//	size_t hash = hashFunction(k);
//	Item *item = newItem(k, v);
//	Item *list = ht->bucket[hash].itemList;
//	item->next = list->next;
//	list->next = item;
//}
//
//// �ش� key: value�� �ؽ����̺� �ִ��� Ȯ��
//// return: Item (������ NULL)
//Item *search(HashTable *ht, Key k, Value v) {
//	size_t hash = hashFunction(k);
//	Item *iterItem = ht->bucket[hash].itemList->next;
//	for (; iterItem != NULL; iterItem = iterItem->next)
//		if (iterItem->key == k && iterItem->value == v)
//			break;
//	return iterItem;
//}
//
//// ������ ����Ʈ
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
//// ������ �����Ҵ�
//Item *newItem(Key k, Value v) {
//	Item *item = (Item*)malloc(sizeof(Item));
//	item->key = k;
//	item->value = v;
//	item->next = NULL;
//	return item;
//}
//
//// ���ڸ� Ȱ���� �ؽ� �Լ�
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
//오일러 - 한붓 그리기 (모든 edge 이동)
//헤밀턴 - 모든 노드 이동
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//// 간선 구조체
//struct Edge {
//	int to, cnt; // to: 인접한 정점, cnt: 남은 사용 횟수
//	Edge *dual; // dual: 역방향 간선을 가리키는 포인터
//	Edge() : Edge(-1, 0) {}
//	Edge(int to1, int cnt1) : to(to1), cnt(cnt1), dual(nullptr) {}
//};
//
//int N, degree[1000];
//vector<Edge*> adj[1000];
//bool visited[1000];
//
//// 컴포넌트별로 방문하는 dfs
//int dfs(int curr) {
//	int result = 1;
//	visited[curr] = true;
//	for (Edge* e : adj[curr]) {
//		int next = e->to;
//		if (!visited[next]) result += dfs(next);
//	}
//	return result;
//}
//
//// 오일러 회로를 출력하는 dfs
//void Eulerian(int curr) {
//	for (Edge *e : adj[curr]) {
//		if (e->cnt > 0) {
//			// 순방향, 역방향 간선을 하나씩 지움
//			e->cnt--;
//			e->dual->cnt--;
//			// dfs
//			Eulerian(e->to);
//		}
//	}
//	printf("%d ", curr + 1);
//}
//
//
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i<N; i++) {
//		for (int j = 0; j<N; j++) {
//			int val;
//			scanf("%d", &val);
//			// 간선 추가
//			if (j > i && val > 0) {
//				Edge *e1 = new Edge(j, val), *e2 = new Edge(i, val);
//				e1->dual = e2;
//				e2->dual = e1;
//				adj[i].push_back(e1);
//				adj[j].push_back(e2);
//				degree[i] += val;
//				degree[j] += val;
//			}
//		}
//	}
//	// 차수가 홀수인 정점이 존재하면 불가능
//	for (int i = 0; i<N; i++) {
//		if (degree[i] % 2 == 1) {
//			puts("-1");
//			return 0;
//		}
//	}
//
//	bool flag = false;
//	int start = -1;
//	for (int i = 0; i<N; i++) {
//		if (!visited[i]) {
//			int cSize = dfs(i);
//			if (cSize > 1) {
//				if (flag) { // 크기가 2 이상인 컴포넌트가 2개 이상이면 불가능
//					puts("-1");
//					return 0;
//				}
//				else {
//					start = i;
//					flag = true;
//				}
//			}
//		}
//	}
//	if (start == -1) start = 0;
//
//	// 오일러 회로 찾기 시작
//	Eulerian(start);
//}
//추천 문제
//
//1199번: 오일러 회로
//
//위에서 설명한 문제입니다.
//1616번: 드럼통 굴리기(★)
//
//갓문제 1. 문제를 다르게 표현하면 모든 M자리 K진수를 한 개씩 만드는 겁니다. (M - 1)자리의 모든 K진수 K ^ (M - 1)개가 각 정점입니다.이제 정점 u에서 0~K - 1 사이의 모든 수 k에 대해, u의 첫 한 자리를 지우고 마지막에 k를 붙여 새로 만들어진 M - 1자리 K진수수 v로 가는 간선을 만들고 각각 k라 마킹합니다.총 간선 수는 K ^ (M - 1)*K = K ^ M개입니다.이제 여기서 오일러 회로를 찾는 것이 곧 문제를 푸는 셈이 되겠죠!
//
//단, 제한이 너무 빡빡하기 때문에 시간이든 메모리든 초과가 엄청나게 일어납니다.최대한 정적 배열로 해결해야 합니다.또한, M자리 K진수가 K^M개 있는 것은 맞고 각각 십진법으로 나타낼 시 0~K^M - 1로 일대일 대응되는 것도 맞지만, 그냥 보이는 그대로 문자열로 저장한다던가 하면 오버헤드가 클 수 있습니다.특히 5백만 자리 2진수 같은 걸 저장했다간...
//
//1591번: 수열 복원(★)
//
//갓문제 2. 위의 드럼통 굴리기 문제와 유사합니다.주어진 길이 M의 부분수열들마다, 2개의 길이 M - 1인 부분수열이 중복 상관없이 등장하게 되는데, 이러한 각 부분수열을 정점으로 둡니다.이때는 값 자체가 같으면 같은 정점입니다.이제 i번째 M자리 부분수열에서 마지막 항을 제거한 부분수열->첫 항을 제거한 부분수열로 가는 간선을 추가해 주고, 단방향 오일러 경로를 찾으면 됩니다.
//
//역시 중복 간선이 존재할 수 있으니 주의해야 합니다.또한 답이 회로일 수도, 아닐 수도 있으므로 주의해야 합니다.


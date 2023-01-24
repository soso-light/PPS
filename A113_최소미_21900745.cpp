/*
방향 없는 그래프가 주어졌을 때,
연결 요소 (Connected Component)의 개수를 구하는 프로그램 작성
input
첫째 줄 : 정점의 개수 N과 간선의 개수
M(1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2)
둘째 줄 : M개의 줄에 간선의 양 끝점 u와 v 
(1 ≤ u, v ≤ N, u ≠ v)
output
연결 요소의 개수를 출력
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
vector<int> adj[1002];
bool visited[1002];

void dfs(int now) {
	visited[now] = 1;
	for (int i = 0; i < adj[now].size(); i++){
		int next = adj[now][i];
		if (!visited[next]) dfs(next);
	}
}

int main() {

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int j = 1; j <= n; j++) {
		sort(adj[j].begin(), adj[j].end());
	}
	
	int cnt = 0;
	for (int k = 1; k <= n; k++) {
		if (visited[k]) continue;
		dfs(k);
		cnt++;
	}
	cout << cnt;
}
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 2001
vector<int>graph[MAX_SIZE];
bool is_visited[MAX_SIZE] = { 0, };
int ans = 0;
void find_relationship(int x, int cnt) {
	if (cnt == 4) {
		ans = 1;
		return;
	}
	is_visited[x] = 1;
	for (int i = 0; i < graph[x].size(); i++) {
		if (is_visited[graph[x][i]] == 0) {
			find_relationship(graph[x][i], cnt + 1);
		}
	}
	is_visited[x] = 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int to, from;
		cin >> to >> from;
		graph[to].push_back(from);
		graph[from].push_back(to);
	}
	for (int i = 0; i < n; i++) {
		find_relationship(i, 0);
	}
	cout << ans;
}
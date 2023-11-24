#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>tree[100001];
int visited[100001] = { 0 }, loc = 0, MAX = 0;
void dfs(int v, int len) {
	if (visited[v])return;
	visited[v] = 1;
	if (len > MAX) {
		loc = v, MAX = len;
	}
	for (int i = 0; i < tree[v].size(); i++) {
		dfs(tree[v][i].first, len + tree[v][i].second);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int v, vertex, avertex, edge;
	cin >> v;
	for (int i = 0; i < v; i++) {
		cin >> vertex;
		while (1) {
			cin >> avertex;
			if (avertex == -1)break;
			cin >> edge;
			tree[vertex].push_back({ avertex,edge });
		}
	}
	dfs(1, 0);
	memset(visited, 0, sizeof(visited));
	dfs(loc, 0);
	cout << MAX;
}
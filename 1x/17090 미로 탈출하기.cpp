#include<bits/stdc++.h>
using namespace std;
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 }, dp[501][501], n, m, dir = 0;
char arr[501][501];
int dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= m)return 1;
	if (dp[x][y] != -1)return dp[x][y];
	dp[x][y] = 0;
	switch (arr[x][y]) {
	case 'U': dir = 0; break;
	case 'R': dir = 1; break;
	case 'D': dir = 2; break;
	case 'L': dir = 3; break;
	}
	dp[x][y] = dfs(x + dx[dir], y + dy[dir]);
	return dp[x][y];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int ans = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			dp[i][j] = -1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += dfs(i, j);
		}
	}
	cout << ans;
}
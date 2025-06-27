#include<iostream>

using namespace std;

int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 }, visited[1001][1001] = { 0 }, cnt = 0;
int n, m, x, y;
char arr[1000][1000];

void dfs(int y, int x) {
	if (visited[y][x] == 0) {
		visited[y][x] = 1;
		if (arr[y][x] == 'P') {
			cnt++;
		}
		for (int i = 0; i < 4; ++i) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny > -1 && ny < n && nx > -1 && nx < m) {
				if ((arr[ny][nx] == 'O' || arr[ny][nx] == 'P') && visited[ny][nx] == 0) {
					dfs(ny, nx);
				}
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 'I') {
				y = i, x = j;
			}
		}
	}

	dfs(y, x);

	if (cnt != 0) {
		cout << cnt;
	}
	else {
		cout << "TT";
	}

	return 0;
}
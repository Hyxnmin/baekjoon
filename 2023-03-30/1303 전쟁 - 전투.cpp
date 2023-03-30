#include<stdio.h>
#include<stdbool.h>

int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 }, n, m, w, b;
bool visited[100][100];
char arr[101][101];

int dfs(int x, int y, char chk) {
	int cnt = 1;

	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {

		int nx = x + dx[i], ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			continue;

		if (!visited[nx][ny] && arr[nx][ny] == chk)
			cnt += dfs(nx, ny, chk);
	}
	return cnt;
}
int main() {
	
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j]) {

				int k = dfs(i, j, arr[i][j]);
				if (arr[i][j] == 'W') {
					w += k * k;
				}
				else {
					b += k * k;
				}
			}
		}
	}
	printf("%d %d\n", w, b);
}
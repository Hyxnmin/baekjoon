#include<iostream>
#include<queue>

using namespace std;

queue<pair<int, int>>q;


int map[1002][1002] = { 0, }, visited[1001][1001] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, m,x,y,nx,ny;
	int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				q.push({ i,j });
				map[i][j] = 0;
			}
		}
	}

	while (q.empty() == 0) {
		x = q.front().second, y = q.front().first;
		visited[y][x] = 1;
		for (int i = 0; i < 4; ++i) {
			ny = y + dy[i], nx = x + dx[i];
			if (ny > -1 && ny < n && nx > -1 && nx < m) {
				if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
					map[ny][nx] = map[y][x] + 1;
					q.push({ ny,nx });
				}
			}
		}
		q.pop();
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (visited[i][j] == 0 && map[i][j] == 1) {
				map[i][j] = -1;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << map[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
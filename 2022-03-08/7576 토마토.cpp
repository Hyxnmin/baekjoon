#include<bits/stdc++.h>
using namespace std;
queue<pair<int, int>>q;
typedef struct p {
	int n, m;
}p;
p arr[1001][1001] = { 0 };
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, cnt = 0, x = 0, y = 0;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cin >> arr[i][j].n;
			if (!(arr[i][j].n))cnt++;
			if (arr[i][j].n == 1) {
				q.push({ i,j });
			}
		}
	}
	while (cnt > 0 && !q.empty()) {
		x = q.front().first, y = q.front().second;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx > -1 && nx<b && ny >-1 && ny < a) {
				if (arr[nx][ny].n == 0 && !arr[nx][ny].m) {
					q.push({ nx, ny }), cnt--;
					arr[nx][ny].m = arr[x][y].m + 1;
					arr[nx][ny].n = 1;
				}
			}
		}
		q.pop();
	}
	if (cnt != 0) {
		cout << -1;
	}
	else cout << arr[q.back().first][q.back().second].m;
}
#include<bits/stdc++.h>
using namespace std;
queue<pair<int, int>>q;
int vis[100001] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, MIN = 0, cnt = 0;
	cin >> a >> b;
	q.push({ a,0 });
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop(), vis[x] = 1;
		if (cnt && x == b && MIN == y)cnt++;
		if (!cnt && x == b) {
			MIN = y, cnt++;
		}
		if (x - 1 > -1 && !vis[x - 1]) q.push({ x - 1,y + 1 });
		if (x + 1 < 100001 && !vis[x + 1])q.push({ x + 1 , y + 1 });
		if (x * 2 < 100001 && !vis[x * 2])q.push({ x * 2,y + 1 });
	}
	cout << MIN << '\n' << cnt;
}
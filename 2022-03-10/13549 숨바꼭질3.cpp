#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
int vis[100001] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, MIN = 0;
	cin >> a >> b;
	q.push({ 0,a });
	vis[a] = 1;
	while (!q.empty()) {
		int y = q.top().first, x = q.top().second;
		q.pop();
		if (x == b) {
			MIN = y;
			break;
		}
		if (x * 2 < 100001 && !vis[x * 2]) {
			q.push({ y,x * 2 });
			vis[x * 2] = 1;
		}
		if (x - 1 > -1 && !vis[x - 1]) {
			q.push({ y + 1,x - 1 });
			vis[x - 1] = 1;
		}
		if (x + 1 < 100001 && !vis[x + 1]) {
			q.push({ y + 1 , x + 1 });
			vis[x + 1] = 1;
		}
	}
	cout << MIN;
}
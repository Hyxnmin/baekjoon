#include<bits/stdc++.h>
using namespace std;
int n, chk[15] = { 0 }, cnt = 0;
void path(int x) {
	if (x == n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) {
		int ck = 1;
		for (int j = 0; j < x; j++) {
			if (chk[j] == i || abs(chk[j] - i) == abs(x - j)) {
				ck = 0;
				break;
			}
		}
		if (ck) {
			chk[x] = i;
			path(x + 1);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	path(0);
	cout << cnt;
}
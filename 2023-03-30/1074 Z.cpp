#include<bits/stdc++.h>
using namespace std;

int r, c, cnt = 0;

void find_loc(int x, int y,int size) {
	if (x == c && y == r) {
		cout << cnt;
		return;
	}
	else if (c < x + size && r < y + size && c >= x && r >= y) {
		find_loc(x, y, size / 2);
		find_loc(x + size / 2, y, size / 2);
		find_loc(x, y + size / 2, size / 2);
		find_loc(x + size / 2, y + size / 2, size / 2);
	}
	else {
		cnt += size * size;
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;

	cin >> n >> r >> c;

	find_loc(0, 0, (1 << n));
}
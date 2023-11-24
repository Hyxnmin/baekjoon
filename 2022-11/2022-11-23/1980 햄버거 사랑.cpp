#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int tb, bb, t, rt = 0, tb_cnt = 0;

	cin >> tb >> bb >> t;
	if (tb > bb)swap(tb, bb);

	for (int i = 0; i < t; i++) {
		rt = t - i;
		tb_cnt = rt / tb;

		while (tb_cnt >= 0) {
			if ((rt - tb * tb_cnt) % bb == 0) {
				cout << tb_cnt + (rt - tb * tb_cnt) / bb << ' ' << i;
				return 0;
			}

			tb_cnt -= 1;
		}

	}
	cout << 0 << ' ' << t;
}
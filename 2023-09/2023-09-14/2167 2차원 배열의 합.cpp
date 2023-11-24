#include<iostream>

using namespace std;

int prefix_sum[3001][3001] = { 0, };

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int a, n, m, w, x, y, z, k;

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> a;
			prefix_sum[i][j] += prefix_sum[i][j - 1] + prefix_sum[i - 1][j] - prefix_sum[i - 1][j - 1] + a;
		}
	}

	cin >> k;

	for (int i = 0; i < k; ++i) {
		cin >> w >> x >> y >> z;
		cout << prefix_sum[y][z] - prefix_sum[y][x - 1] - prefix_sum[w - 1][z] + prefix_sum[w - 1][x - 1] << '\n';
	}

	return 0;
}
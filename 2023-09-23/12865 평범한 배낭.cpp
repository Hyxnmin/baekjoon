#include<iostream>
#include<algorithm>

using namespace std;

int n, k, w[100001] = { 0 }, v[1001] = { 0 }, dp[101][100001] = { 0 };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= k; ++j) {
			if (w[i] > j) {
				dp[i][j] = dp[i-1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}

	cout << dp[n][k];

	return 0;
}
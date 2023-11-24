#include<iostream>

using namespace std;

#define MOD 1000000000

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	long long n, dp[101][10] = { 0 }, res = 0;

	cin >> n;

	for (int i = 1; i <= 9; ++i) {
		dp[0][i] = 1;
	}

	for (int i = 1; i < n; ++i) {
		dp[i][0] = dp[i - 1][1] % MOD;
		dp[i][1] = dp[i - 1][0] + dp[i - 1][2] % MOD;
		dp[i][2] = dp[i - 1][1] + dp[i - 1][3] % MOD;
		dp[i][3] = dp[i - 1][2] + dp[i - 1][4] % MOD;
		dp[i][4] = dp[i - 1][3] + dp[i - 1][5] % MOD;
		dp[i][5] = dp[i - 1][4] + dp[i - 1][6] % MOD;
		dp[i][6] = dp[i - 1][5] + dp[i - 1][7] % MOD;
		dp[i][7] = dp[i - 1][6] + dp[i - 1][8] % MOD;
		dp[i][8] = dp[i - 1][7] + dp[i - 1][9] % MOD;
		dp[i][9] = dp[i - 1][8] % MOD;
	}

	for (int i = 0; i <= 9; ++i) {
		res += dp[n - 1][i] %MOD;
	}

	cout << res % MOD;

	return 0;
}
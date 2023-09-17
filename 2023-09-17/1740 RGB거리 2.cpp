#include<iostream>

using namespace std;

#define INF 1987654321

int arr[1001][3], dp[1001][3];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, res = INF;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; ++j)cin >> arr[i][j];
	}
	
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (i == j) {
				dp[0][j] = arr[0][j];
			}
			else {
				dp[0][j] = INF;
			}
		}
		for (int j = 1; j < n; ++j) {
			dp[j][0] = min(dp[j - 1][1], dp[j - 1][2]) + arr[j][0];
			dp[j][1] = min(dp[j - 1][0], dp[j - 1][2]) + arr[j][1];
			dp[j][2] = min(dp[j - 1][0], dp[j - 1][1]) + arr[j][2];
		}

		for (int j = 0; j < 3; ++j) {
			if (i == j) {
				continue;
			}
			res = min(res, dp[n-1][j]);
		}
	}

	cout << res << '\n';

	return 0;
}
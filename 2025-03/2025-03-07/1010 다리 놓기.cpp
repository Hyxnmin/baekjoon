#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, s, e, dp[30][30] = { 0 };

    for (int i = 1;i < 30;++i) {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for (int j = 1;j < i;++j) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> s >> e;

        cout << dp[e][s] << '\n';
    }
}
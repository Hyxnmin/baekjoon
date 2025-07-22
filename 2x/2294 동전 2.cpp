#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, v, coin[101] = { 0 }, dp[100001] = { 0 }, cnt = 0;

    cin >> n >> k;

    for (int i = 0;i < n;++i) {
        cin >> v;
        if (dp[v] == 0) {
            coin[cnt++] = v;
        }
        dp[v] = 1;
    }

    for (int i = 0;i <= k;++i) {
        if (dp[i] != 0) {
            for (int j = 0;j < cnt;++j) {
                dp[i + coin[j]] = (dp[i + coin[j]] != 0) ? min(dp[i + coin[j]], dp[i] + 1) : dp[i] + 1;
            }
        }
    }

    if (dp[k] == 0)dp[k] = -1;

    cout << dp[k];

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, arr[1001] = { 0 }, dp[1001] = { 0 }, MAX = 0;
    stack<int> s;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        dp[i] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        MAX = max(MAX, dp[i]);

    }
    cout << MAX << '\n';
    for (int i = n - 1; i >= 0; --i) {
        if (MAX == dp[i]) {
            s.push(arr[i]);
            MAX--;
        }
    }

    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
}
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

bool check[1000001] = { 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, f = 0, cnt = 0;

    for (int i = 2; i <= 1000000; ++i) {
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                f = 1; break;
            }
        }
        if (f == 0) {
            check[i] = 1;
        }
        f = 0;
    }

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        for (int j = 2; j <= n - j; ++j) {
            if (check[j] == 1 && check[n - j] == 1) {
                cnt++;
            }
        }
        cout << cnt << '\n';
        cnt = 0;
    }

    return 0;
}
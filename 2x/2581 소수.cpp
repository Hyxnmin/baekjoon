#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, arr[100001] = { 0 }, res = 0, MIN = 0;
    cin >> m >> n;

    arr[1] = -1;
    for (int i = 2; i * i <= n; ++i) {
        for (int j = m; j <= n; ++j) {
            if (i != j && j % i == 0) {
                arr[j] = 1;
            }
        }
    }

    for (int i = m; i <= n; ++i) {
        if (arr[i] == 0) {
            if (res == 0) {
                MIN = i;
            }
            res += i;
        }
    }

    if (res == 0) {
        cout << -1;
    }
    else {
        cout << res << '\n' << MIN;
    }
    return 0;
}
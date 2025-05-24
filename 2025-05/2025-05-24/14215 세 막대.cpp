#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, MAX = 0, res = 0;

    for (int i = 0;i < 3;++i) {
        cin >> n;
        if (n > MAX) {
            MAX = n;
        }
        res += n;
    }
    res -= MAX;
    if (res <= MAX) {
        cout << 2 * res - 1;
    }
    else {
        cout << res + MAX;
    }

    return 0;
}
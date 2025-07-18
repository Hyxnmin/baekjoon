#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, len = 0, res[100001] = { 0 };
    string a, b;

    cin >> n >> m;
    cin.ignore();
    cin >> a >> b;

    if (n < m) {
        swap(n, m);
        swap(a, b);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i + j] += (a[j] - '0') * (b[i] - '0');
        }
    }

    for (int i = 0; i < n + m; ++i) {
        if (res[i] >= 10) {
            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }
    }

    len = n + m - 1;
    while (len > 0 && res[len] == 0)len--;

    for (int i = len; i >= 0; --i) {
        cout << res[i];
    }
}
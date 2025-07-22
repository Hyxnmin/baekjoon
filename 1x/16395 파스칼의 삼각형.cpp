#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, p[31][31] = { 0 };

    cin >> n >> k;

    for (int i = 1;i <= n;++i) {
        p[i][1] = p[i][i] = 1;
    }

    for (int i = 3;i <= n;++i) {
        for (int j = 2;j < i;++j) {
            p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
        }
    }

    cout << p[n][k];

    return 0;
}
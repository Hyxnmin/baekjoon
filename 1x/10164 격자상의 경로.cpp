#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, x = 0, y = 0, map[16][16] = { 0 };

    cin >> n >> m >> k;

    map[0][0] = 1;

    if (k != 0) {
        x = (k - 1) / m;
        y = (k - 1) % m;
        for (int i = 0; i <= x; ++i) map[i][0] = 1;
        for (int i = 1; i <= y; ++i) map[0][i] = 1;
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= y; ++j) {
                map[i][j] = map[i - 1][j] + map[i][j - 1];
            }
        }
    }

    for (int i = x + 1; i < n; ++i) map[i][y] = 1;
    for (int i = y + 1; i < m; ++i) map[x][i] = 1;
    for (int i = x + 1; i < n; ++i) {
        for (int j = y + 1; j < m; ++j) {
            map[i][j] = map[i - 1][j] + map[i][j - 1];
        }
    }

    cout << map[x][y] * map[n - 1][m - 1];

    return 0;
}
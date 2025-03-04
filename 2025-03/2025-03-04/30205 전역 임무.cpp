#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, s[501][501] = { 0 }, cnt = 0;
    long long p;

    cin >> n >> m >> p;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        sort(s[i], s[i] + m);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (s[i][j] == -1) {
                cnt++;
            }
            else {
                if (s[i][j] <= p) {
                    p += s[i][j];
                }
                else {
                    while (cnt && s[i][j] > p) {
                        if (cnt > 0) {
                            p *= 2, cnt--;
                        }
                    }
                    if (s[i][j] <= p) {
                        p += s[i][j];
                    }
                    else {
                        cout << 0;
                        return 0;
                    }
                }
            }
        }
        if (p >= 1e19) {
            cout << 0;
            return 0;
        }
        while (cnt > 0) {
            p *= 2, cnt--;
        }
        cnt = 0;
    }
    cout << 1;
}
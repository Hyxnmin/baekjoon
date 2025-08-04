#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, f = 0;

    while (1) {
        cin >> n;

        if (n == 0)break;
        for (int i = n + 1;i <= 2 * n;++i) {
            for (int j = 2;j <= sqrt(i);++j) {
                if (i % j == 0) {
                    f = 1;break;
                }
            }
            if (f == 0) {
                cnt++;
            }
            f = 0;
        }
        cout << cnt << '\n';
        cnt = 0;
    }

    return 0;
}
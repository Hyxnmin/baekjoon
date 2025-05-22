#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q, cnt = 0, res = 0;

    cin >> p >> q;
    for (int i = 1;i <= p;++i) {
        if (p % i == 0) {
            cnt++;
            if (cnt == q) {
                res = i;
                goto res;
            }
        }
    }
res:
    cout << res;
    return 0;
}
#include <iostream>

using namespace std;

int stack[1000001] = { 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x, cnt = 0;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        switch (n) {
        case 1:
            cin >> x;
            stack[cnt++] = x;
            break;
        case 2:
            if (cnt > 0) cout << stack[--cnt] << '\n';
            else cout << -1 << '\n';
            break;
        case 3:
            cout << cnt << '\n';
            break;
        case 4:
            if (cnt > 0)cout << 0 << '\n';
            else cout << 1 << '\n';
            break;
        case 5:
            if (cnt > 0)cout << stack[cnt - 1] << '\n';
            else cout << -1 << '\n';
            break;
        }
    }
    return 0;
}
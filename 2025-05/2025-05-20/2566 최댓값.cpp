#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res = -1, x = 0, y = 0;

    for (int i = 0;i < 9;++i) {
        for (int j = 0;j < 9;++j) {
            cin >> n;
            if (n > res) {
                res = n;
                x = i + 1, y = j + 1;
            }
        }
    }

    cout << res << '\n' << x << ' ' << y;
    return 0;
}
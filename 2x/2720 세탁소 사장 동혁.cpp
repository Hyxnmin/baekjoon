#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, Q, D, N;
    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> c;
        Q = c / 25;
        c %= 25;
        D = c / 10;
        c %= 10;
        N = c / 5;
        c %= 5;
        cout << Q << ' ' << D << ' ' << N << ' ' << c << '\n';
    }

    return 0;
}
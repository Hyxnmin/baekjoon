#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[3] = { 0 }, y[3] = { 0 }, r1 = 0, r2 = 0;

    for (int i = 0;i < 3;++i) {
        cin >> x[i] >> y[i];
    }

    r1 = (x[0] == x[1]) ? x[2] : (x[0] == x[2]) ? x[1] : x[0];
    r2 = (y[0] == y[1]) ? y[2] : (y[0] == y[2]) ? y[1] : y[0];

    cout << r1 << ' ' << r2;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int w, h, p, q, t, x, y;

    cin >> w >> h >> p >> q >> t;

    p += t, q += t;

    x = ((p / w) % 2 == 0) ? p % w : w - (p % w);
    y = ((q / h) % 2 == 0) ? q % h : h - (q % h);

    cout << x << ' ' << y;
}
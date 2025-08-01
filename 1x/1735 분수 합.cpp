#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (y == 0)return x;
    return gcd(y, x % y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, g, n1, n2;

    cin >> a >> b >> c >> d;

    n1 = a * d + c * b;
    n2 = b * d;

    g = gcd(n1, n2);

    cout << n1 / g << ' ' << n2 / g;

    return 0;
}
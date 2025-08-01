#include <iostream>

using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0)return x;
    return gcd(y, x % y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, n;

    cin >> a >> b;

    n = gcd(a, b);

    cout << a * b / n;

    return 0;
}
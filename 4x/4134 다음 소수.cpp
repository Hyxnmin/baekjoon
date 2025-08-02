#include <iostream>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(long long x) {
    for (long long i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0)return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a >= 0 && a <= 2)cout << 2 << '\n';
        else {
            while (!isPrime(a)) {
                a++;
            }
            cout << a << '\n';
        }
    }

    return 0;
}
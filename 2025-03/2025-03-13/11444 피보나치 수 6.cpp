#include <iostream>
#include <map>
using namespace std;

map<long long, long long> m;
const int MOD = 1000000007;

long long fibonacci(long long n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;

    if (m.find(n) != m.end()) return m[n];

    long long p, q;

    if (n % 2 == 1) {
        p = fibonacci(n / 2 + 1) % MOD;
        q = fibonacci(n / 2) % MOD;
        return m[n] = (p * p % MOD + q * q % MOD) % MOD;
    }
    else {
        p = fibonacci(n / 2 + 1) % MOD;
        q = fibonacci(n / 2 - 1) % MOD;
        return m[n] = ((p * p % MOD - q * q % MOD) + MOD) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n;
    cin >> n;
    cout << fibonacci(n) << "\n";

    return 0;
}

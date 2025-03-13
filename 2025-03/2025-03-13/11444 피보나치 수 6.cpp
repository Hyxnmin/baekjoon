#include <iostream>
#include <map>
using namespace std;

map<long, long> m;
const int MOD = 1000000007;

long long fibonacci(long long n) {
    if (m[n] != 0)return m[n];

    long long res;

    if (n % 2 == 0) {
        res = (fibonacci(n / 2) * ((fibonacci(n / 2 + 1) % MOD + fibonacci(n / 2 - 1) % MOD))) % MOD;
    }
    else {
        res = ((fibonacci((n + 1) / 2) * fibonacci((n + 1) / 2)) % MOD + (fibonacci((n - 1) / 2) * fibonacci((n - 1) / 2)) % MOD) % MOD;
    }
    return m[n] = res % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n;
    m[0] = 0, m[1] = 1, m[2] = 1;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}

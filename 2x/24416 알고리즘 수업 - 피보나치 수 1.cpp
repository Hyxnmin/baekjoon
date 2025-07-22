#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    long long n, fibo[41] = { 0 };

    cin >> n;

    fibo[1] = fibo[2] = 1;

    for (int i = 3;i <= n;++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n] << ' ' << n - 2;

    return 0;
}
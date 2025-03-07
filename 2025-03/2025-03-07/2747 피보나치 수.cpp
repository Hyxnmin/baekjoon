#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, fibo[100] = { 0, };

    cin >> n;

    fibo[1] = 1;

    for (int i = 2;i <= n;++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n];
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t[100] = { 0 };

    cin >> n;

    t[0] = t[1] = 1;

    for (int i = 2;i <= n;++i) {
        for (int j = 0;j < i;++j) {
            t[i] += t[i - j - 1] * t[j];
        }
    }

    cout << t[n];

    return 0;
}
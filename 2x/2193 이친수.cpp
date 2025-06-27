#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    long long b[91] = { 0 };

    cin >> n;

    b[0] = b[1] = 1;

    for (int i = 2;i <= n;++i) {
        b[i] = b[i - 1] + b[i - 2];
    }

    cout << b[n - 1];
}
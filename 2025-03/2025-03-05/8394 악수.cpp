#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    long long s[10000001] = { 0 };

    cin >> n;

    s[0] = 1;
    s[1] = 2;

    for (int i = 2;i <= n;++i) {
        s[i] = (s[i - 1] + s[i - 2]) % 10;
    }

    cout << s[n - 1];
}
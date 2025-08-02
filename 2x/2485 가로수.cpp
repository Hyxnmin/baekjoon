#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (y == 0)return x;
    return gcd(y, x % y);
}

int n, arr[100001] = { 0 }, s[100001] = { 0 }, cnt = 0, g = 0, ck = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        s[cnt++] = arr[i + 1] - arr[i];
    }
    g = gcd(s[0], s[1]);

    for (int i = 2; i < cnt; ++i) {
        g = gcd(g, s[i]);
    }

    cout << (arr[n - 1] - arr[0]) / g - (n - 1);

    return 0;
}
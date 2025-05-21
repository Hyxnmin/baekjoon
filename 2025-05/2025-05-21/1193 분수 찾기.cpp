#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, s = 0, t = 0;
    cin >> n;

    while (cnt + s < n) {
        s++;
        cnt += s;
    }

    t = cnt + s - n;
    if (s % 2 == 1) {
        cout << 1 + t << '/' << s - t;
    }
    else {
        cout << s - t << '/' << 1 + t;
    }

    return 0;
}
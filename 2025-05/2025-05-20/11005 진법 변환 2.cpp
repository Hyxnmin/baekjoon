#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, r = 0;
    string str;
    cin >> n >> b;

    while (n != 0) {
        r = n % b;
        n /= b;
        if (r > 9) {
            str += (char)55 + r;
        }
        else {
            str += (char)48 + r;
        }
    }

    reverse(str.begin(), str.end());
    cout << str;

    return 0;
}
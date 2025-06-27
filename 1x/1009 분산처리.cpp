#include <iostream>

using namespace std;

int main() {

    int n, a, b, check[10] = { 0 }, cnt, mul = 1, r = 0, s[10] = { 0 };

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;

        for (int j = 1; j <= b; ++j) {
            mul *= a;
            mul %= 10;
            if (check[mul] != 0) {
                break;
            }
            else {
                s[cnt++] = mul, check[mul] = 1;
            }
        }
        r = b % cnt;
        if (r - 1 < 0) {
            r = cnt - 1;
        }
        else {
            r--;
        }
        if (s[r] == 0) {
            cout << "10" << '\n';
        }
        else {
            cout << s[r] << '\n';
        }
        for (int j = 0; j < 10; ++j) {
            s[j] = check[j] = 0;
        }
        cnt = r = 0;
        mul = 1;
    }
}
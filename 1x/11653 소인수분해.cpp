#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, arr[10001] = { 0 };

    cin >> n;

    if (n > 1) {
        for (int i = 2;i <= n;++i) {
            while (n % i == 0) {
                cout << i << '\n';
                n /= i;
            }
        }
    }
}
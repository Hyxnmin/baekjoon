#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, n, a, b, price = 0;

    cin >> x >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        price += a * b;
    }

    if (price == x) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
#include <iostream>
#include <cmath>

using namespace std;

void c(int n) {
    if (n == 0) {
        cout << '-';
        return;
    }

    c(n - 1);
    for (int i = 0; i < pow(3, n - 1); ++i) {
        cout << ' ';
    }
    c(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n) {
        c(n);
        cout << '\n';
    }

    return 0;

}
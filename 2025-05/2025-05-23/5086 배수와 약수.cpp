#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        if (b % a == 0) {
            cout << "factor" << '\n';
        }
        else if (a % b == 0) {
            cout << "multiple" << '\n';
        }
        else {
            cout << "neither" << '\n';
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[3] = { 0 }, cnt = 0, MAX = 0, sum = 0;

    while (1) {
        for (int i = 0;i < 3;++i) {
            cin >> x[i];
            if (x[i] == 0)cnt++;
            if (x[i] > MAX)MAX = x[i];
            sum += x[i];
        }
        if (cnt == 3) {
            break;
        }
        if (sum - MAX <= MAX)cout << "Invalid" << '\n';
        else {
            if (x[0] == x[1] && x[1] == x[2]) {
                cout << "Equilateral" << '\n';
            }
            else if (x[0] == x[1] || x[1] == x[2] || x[0] == x[2]) {
                cout << "Isosceles" << '\n';
            }
            else {
                cout << "Scalene" << '\n';
            }

        }
        cnt = 0, MAX = 0, sum = 0;
    }

    return 0;
}
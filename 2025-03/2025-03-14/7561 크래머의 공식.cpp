#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n, mul[4] = { 0, }, arr[4][4] = { 0, };
    double res[3] = { 0 };

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int l = 0; l < 4; ++l) {
                cin >> arr[j][l];
            }
        }
        mul[0] = (arr[0][3] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])) - (arr[0][1] * (arr[1][3] * arr[2][2] - arr[1][2] * arr[2][3])) + (arr[0][2] * (arr[1][3] * arr[2][1] - arr[1][1] * arr[2][3]));
        mul[1] = (arr[0][0] * (arr[1][3] * arr[2][2] - arr[1][2] * arr[2][3])) - (arr[0][3] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][3] - arr[1][3] * arr[2][0]));
        mul[2] = (arr[0][0] * (arr[1][1] * arr[2][3] - arr[1][3] * arr[2][1])) - (arr[0][1] * (arr[1][0] * arr[2][3] - arr[1][3] * arr[2][0])) + (arr[0][3] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));
        mul[3] = (arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])) - (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));

        cout << mul[0] << ' ' << mul[1] << ' ' << mul[2] << ' ' << mul[3] << '\n';

        if (mul[3] == 0) {
            cout << "No unique solution ";
        }
        else {
            for (int j = 0; j < 3; ++j) {
                res[j] = (double)mul[j] / (double)mul[3];
                if (res[j] > -0.0005 && res[j] < 0.0005) {
                    res[j] = 0.000;
                }
            }
            cout << fixed;
            cout.precision(3);
            cout << "Unique solution: " << res[0] << ' ' << res[1] << ' ' << res[2] << ' ';
        }
        if (i != n - 1) {
            cout << '\n';
        }
    }
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ab, bc, cd;
    double res;

    cin >> ab >> bc >> cd;

    res = (double)ab * cd / bc;

    cout << fixed;
    cout.precision(7);
    cout << res;

}
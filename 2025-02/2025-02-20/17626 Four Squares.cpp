#include <iostream>
#include <algorithm>
using namespace std;

int c = 0, arr[300] = { 0 }, MIN[100001] = { 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i * i <= n; ++i) {
        arr[i] = i * i;
        c++;
    }

    for (int i = 0; i <= n; ++i) {
        for (int j = 1; j <= c; ++j) {
            if (MIN[i + arr[j]] != 0) {
                if (MIN[i + arr[j]] > MIN[i] + 1) {
                    MIN[i + arr[j]] = MIN[i] + 1;
                }
            }
            else {
                MIN[i + arr[j]] = MIN[i] + 1;
            }
        }
    }
    cout << MIN[n];
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n, arr[5001] = { 0 }, lhp, rhp, res = 0, l = 0, r = 0, m = 0, MIN = 3987654321;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 1; i < n - 1; ++i) {
        lhp = i - 1;
        rhp = i + 1;

        while (lhp > -1 && rhp < n) {
            res = arr[lhp] + arr[i] + arr[rhp];
            if (abs(res) < abs(MIN)) {
                MIN = res, l = lhp, r = rhp, m = i;
            }
            if (res >= 0) lhp--;
            else rhp++;
        }
    }
    cout << arr[l] << ' ' << arr[m] << ' ' << arr[r];
}
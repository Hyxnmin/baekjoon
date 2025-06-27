#include <iostream>

using namespace std;

long long arr[10000001] = { 0 }, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    arr[0] = 1;

    cin >> n;

    for (long long i = 1; i <= n; ++i) {
        arr[i] += (arr[i - 1] + 3 * i + 1) % 45678;
    }

    cout << arr[n];
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, cnt = 0;
    long long arr[1001][10] = { 0 }, res[1001] = { 0 }, sum = 0;

    cin >> n;

    for (int i = 0; i < 10; ++i) {
        arr[1][i] = 1;
        res[1]++;
    }

    for (int i = 2; i <= n; ++i) {

        for (int j = 0; j < 10; ++j) {
            for (int l = j; l < 10; ++l) {
                arr[i][j] = (arr[i][j] + arr[i - 1][l]) % 10007;
            }
            res[i] = (res[i] + arr[i][j]) % 10007;
        }
    }

    cout << res[n];

}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, a, b, c, arr[102] = { 0 };

    cin >> n >> m;

    for (int i = 0;i < m;++i) {
        cin >> a >> b >> c;
        for (int j = a;j <= b;++j) {
            arr[j] = c;
        }
    }
    for (int i = 1;i <= n;++i) {
        cout << arr[i] << ' ';
    }
}
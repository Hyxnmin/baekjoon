#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, x, y, basket[101] = { 0 };

    cin >> n >> m;

    for (int i = 1;i <= n;++i) {
        basket[i] = i;
    }
    for (int i = 0;i < m;++i) {
        cin >> x >> y;
        for (int j = 0;j <= (y - x)/2;++j) {
            swap(basket[x + j], basket[y - j]);
        }
    }

    for (int i = 1;i <= n;++i) {
        cout << basket[i] << ' ';
    }
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x1, x2, y1, y2, x, y, c, cnt = 0;
    double dis1 = 0, dis2 = 0;

    cin >> t;
    for (int i = 0;i < t;++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for (int j = 0;j < n;++j) {
            cin >> x >> y >> c;
            dis1 = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
            dis2 = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
            if (!(dis1 < c && dis2 < c) && (dis1 < c || dis2 < c)) cnt++;
        }
        cout << cnt << '\n';
        cnt = 0;
    }
}
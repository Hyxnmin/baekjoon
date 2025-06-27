#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef struct target {
    long long x, y, dis;
}target;
target arr[1000];

bool comp(target a, target b) {
    return a.dis > b.dis;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, cnt = 0, cur_x = 0, cur_y = 0, res = 0;

    cin >> n >> m;

    for (int i = 0; i < n + m; ++i) {
        cin >> arr[i].x >> arr[i].y;
    }

    while (cnt < m) {
        for (int i = cnt; i < n + cnt; ++i) {
            arr[i].dis = pow(arr[i].x - cur_x, 2) + pow(arr[i].y - cur_y, 2);
        }

        sort(arr + cnt, arr + cnt + n, comp);

        res += arr[cnt].dis;
        cur_x = arr[cnt].x, cur_y = arr[cnt++].y;

    }
    cout << res;
}
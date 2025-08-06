#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

deque<pair<int, int>>dq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, check[1001] = { 0 }, cnt = 0, p;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        dq.push_back({ n, i + 1 });
    }

    for (int i = 0; i < t - 1; ++i) {
        check[i] = dq.front().second;
        p = dq.front().first;
        dq.front().first = 0;
        for (int j = 0; j < abs(p); ++j) {
            if (p > 0) {
                if (dq.front().first != 0) {
                    dq.push_back(dq.front());
                }
                dq.pop_front();
            }
            else {
                if (dq.front().first == 0) {
                    dq.pop_front();
                }
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    check[t - 1] = dq.front().second;

    for (int i = 0; i < t; ++i) {
        cout << check[i] << ' ';
    }

    return 0;
}
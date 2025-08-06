#include <iostream>
#include <queue>

using namespace std;

deque<int>dq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c, cnt = 0, check[100001] = { 0 };

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> c;
        if (c == 0) check[i] = 1;
    }
    for (int i = 0;i < n;++i) {
        cin >> c;
        if (check[i] == 1) {
            dq.push_back(c);
        }
    }

    cnt = dq.size();

    cin >> m;

    for (int i = 0;i < m;++i) {
        cin >> c;
        dq.push_front(c);
        cout << dq.back() << ' ';
        dq.pop_back();
    }
    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

deque<int>dq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        switch (n) {
        case 1:
            cin >> x;
            dq.push_front(x);
            break;
        case 2:
            cin >> x;
            dq.push_back(x);
            break;
        case 3:
            if (dq.empty() == 0) {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else cout << -1 << '\n';
            break;
        case 4:
            if (dq.empty() == 0) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else cout << -1 << '\n';
            break;
        case 5:
            cout << dq.size() << '\n';
            break;
        case 6:
            cout << dq.empty() << '\n';
            break;
        case 7:
            if (dq.empty() == 0)cout << dq.front() << '\n';
            else cout << -1 << '\n';
            break;
        case 8:
            if (dq.empty() == 0)cout << dq.back() << '\n';
            else cout << -1 << '\n';
            break;
        }
    }

    return 0;

}
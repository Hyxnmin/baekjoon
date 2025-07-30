#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k, n;
    char c;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        multiset<int>ms;
        cin >> k;

        for (int j = 0; j < k; ++j) {
            cin >> c >> n;
            if (c == 'I') {
                ms.insert(n);
            }
            else if (c == 'D') {
                if (!ms.empty()) {
                    if (n == -1) {
                        ms.erase(ms.begin());
                    }
                    else if (n == 1) {
                        ms.erase(prev(ms.end()));
                    }
                }
            }
        }
        if (!ms.empty()) {
            cout << *(prev(ms.end())) << ' ' << *(ms.begin()) << '\n';
        }
        else {
            cout << "EMPTY" << '\n';
        }
    }
}
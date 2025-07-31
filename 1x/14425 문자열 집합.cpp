#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string>s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0;
    string str;

    cin >> n >> m;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        getline(cin, str);
        s.insert(str);
    }

    for (int i = 0; i < m; ++i) {
        getline(cin, str);
        if (s.find(str) != s.end()) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
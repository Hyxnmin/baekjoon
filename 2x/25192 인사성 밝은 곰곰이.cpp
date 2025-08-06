#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string>s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string str;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        getline(cin, str);
        if (str == "ENTER") {
            cnt += s.size();
            s = {};
        }
        else s.insert(str);
    }

    cout << cnt + s.size();

    return 0;
}
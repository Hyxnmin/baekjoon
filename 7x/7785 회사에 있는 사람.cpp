#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string, greater<string>>s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string name, status;

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> name >> status;
        if (status == "enter") {
            s.insert(name);
        }
        else if (status == "leave" && s.find(name) != s.end()) {
            s.erase(name);
        }
    }
    for (auto iter : s) {
        cout << iter << '\n';
    }

    return 0;
}
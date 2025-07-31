#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string>S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        for (int j = s.size() - i; j > 0; --j) {
            S.insert(s.substr(i, j));
        }
    }

    cout << S.size() << '\n';

    return 0;
}
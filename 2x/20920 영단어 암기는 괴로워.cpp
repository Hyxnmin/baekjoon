#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct basis {
    string word;
    int len;
    int cnt;
};
bool comp(basis x, basis y) {
    if (x.cnt == y.cnt) {
        if (x.len == y.len) {
            return x.word < y.word;
        }
        return x.len > y.len;
    }
    return x.cnt > y.cnt;
}
vector<basis>v;
map<string, basis>M;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string s;

    cin >> n >> m;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        if (s.length() >= m) {
            if (M[s].cnt == 0) {
                M[s].word = s;
                M[s].len = s.length();
                M[s].cnt = 1;
            }
            else {
                M[s].cnt++;
            }
        }
    }

    for (auto iter : M) {
        v.push_back(iter.second);
    }

    sort(v.begin(), v.end(), comp);

    for (auto iter : v) {
        cout << iter.word << '\n';
    }

    return 0;
}
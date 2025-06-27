#include<iostream>
#include<string>
#include<map>

using namespace std;

map<char, int>m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string str;

    cin >> n;
    cin.ignore();

    for (int i = 0;i < n;++i) {
        getline(cin, str);
        for (int j = 0;j < str.size() - 1;++j) {
            if (str[j] != str[j + 1]) {
                if (m.find(str[j + 1]) != m.end()) {
                    goto nxt;
                }
                m.insert({ str[j], 1 });
            }
        }
        cnt++;
    nxt:
        m.clear();
    }

    cout << cnt;
    return 0;
}
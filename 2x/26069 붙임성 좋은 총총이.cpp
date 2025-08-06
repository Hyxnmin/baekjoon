#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int>m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;;
    string A, B;
    m.insert({ "ChongChong",1 });

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> A >> B;
        if (m[A] == 1 || m[B] == 1) {
            m[A] = 1, m[B] = 1;
        }
    }

    for (auto iter = m.begin();iter != m.end();++iter) {
        if (iter->second == 1) cnt++;
    }

    cout << cnt;

    return 0;
}
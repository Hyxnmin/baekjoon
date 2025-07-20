#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string eq, tmp;
    int ans;
    bool ck = false;

    getline(cin, eq);

    for (int i = 0;i <= eq.size();++i) {
        if (eq[i] == '+' || eq[i] == '-' || i == eq.size()) {
            if (ck) {
                ans -= stoi(tmp);
                tmp = "";
            }
            else {
                ans += stoi(tmp);
                tmp = "";
            }
        }
        else {
            tmp += eq[i];
        }
        if (eq[i] == '-')ck = true;
    }

    cout << ans;
    return 0;
}
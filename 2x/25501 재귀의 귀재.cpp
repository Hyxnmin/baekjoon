#include <iostream>
#include <string>

using namespace std;

int cnt;

int recur(string& s, int lhp, int rhp) {
    cnt++;
    if (lhp >= rhp)return 1;
    else if (s[lhp] != s[rhp])return 0;
    else return recur(s, lhp + 1, rhp - 1);
}

int isPalindrome(string& s) {
    return recur(s, 0, s.length() - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string str;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        getline(cin, str);
        cout << isPalindrome(str) << ' ' << cnt << '\n';
        cnt = 0;
    }

    return 0;
}
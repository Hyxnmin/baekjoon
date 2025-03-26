#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    int lhp = 0, rhp;

    getline(cin, str);
    rhp = str.size() - 1;

    while (lhp < rhp) {
        if (str[lhp] != str[rhp]) {
            cout << 0;
            return 0;
        }
        lhp++, rhp--;
    }

    cout << 1;
}
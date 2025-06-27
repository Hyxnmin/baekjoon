#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string calc(string str1, string str2) {
    string res;
    char upper = 0;

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    for (int i = 0; i < str1.size(); ++i) {
        str1[i] -= '0';
    }

    for (int i = 0; i < str2.size(); ++i) {
        str2[i] -= '0';
    }

    for (int i = 0; i < str1.size() - str2.size(); ++i) {
        str2.push_back(0);
    }

    for (int i = 0; i < str1.size(); ++i) {
        res.push_back(((str1[i] + (2 * str2[i]) + upper) % 10) + '0');
        upper = (str1[i] + (2 * str2[i]) + upper) / 10;
    }
    if (upper != 0) {
        res.push_back(upper + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    string tile[251];

    tile[0] = "1", tile[1] = "1", tile[2] = "3";
    for (int i = 3; i <= 250; ++i) {
        tile[i] = calc(tile[i - 1], tile[i - 2]);
    }

    while (cin >> n) {
        cout << tile[n] << '\n';
    }
}
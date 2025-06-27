#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    int n;
    long long res = 0;

    cin >> str >> n;

    for (int i = str.size() - 1, j = 0;i >= 0;--i, ++j) {
        if (str[i] >= '0' && str[i] <= '9')str[i] -= 48;
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] -= 55;
        res += (long long)pow(n, j) * str[i];
    }

    cout << res;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string isbn;
    int mul[2] = { 1,3 }, check = 0, sum = 0;

    getline(cin, isbn);

    for (int i = 0;i < 12;++i) {
        if (isbn[i] == '*') {
            check = i % 2;
        }
        else {
            sum += (isbn[i] - '0') * mul[i % 2];
        }
    }
    for (int i = 0;i < 10;++i) {
        if (isbn[12] - '0' == (10 - (sum + (i * mul[check])) % 10) % 10) {
            cout << i;
            return 0;
        }
    }
}
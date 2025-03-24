#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    int t = 0;

    getline(cin, str);

    for (int i = 0;i < str.size();++i) {
        if (str[i] >= 'A' && str[i] <= 'C') {
            t += 3;
        }
        else if (str[i] >= 'D' && str[i] <= 'F') {
            t += 4;
        }
        else if (str[i] >= 'G' && str[i] <= 'I') {
            t += 5;
        }
        else if (str[i] >= 'J' && str[i] <= 'L') {
            t += 6;
        }
        else if (str[i] >= 'M' && str[i] <= 'O') {
            t += 7;
        }
        else if (str[i] >= 'P' && str[i] <= 'S') {
            t += 8;
        }
        else if (str[i] >= 'T' && str[i] <= 'V') {
            t += 9;
        }
        else if (str[i] >= 'W' && str[i] <= 'Z') {
            t += 10;
        }
    }
    cout << t;
}
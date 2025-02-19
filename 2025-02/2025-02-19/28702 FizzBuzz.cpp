#include <iostream>
#include<string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str[3];
    long long arr[3] = { 0 }, div = 1987654321, comp[15] = { 0 }, pos = 0, n = 0;

    for (int i = 0; i < 15; ++i) {
        if ((i + 1) % 3 != 0 && (i + 1) % 5 != 0) {
            comp[i] = i + 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        getline(cin, str[i]);
        if (str[i] != "Fizz" && str[i] != "Buzz" && str[i] != "FizzBuzz") {
            arr[i] = stoi(str[i]) % 15;
            n = stoi(str[i]) / 15;
            if (div > n) {
                div = n;
            }
        }
    }

    for (int i = 0; i < 15; ++i) {
        if (arr[0] == comp[i] && arr[1] == comp[(i + 1) % 15] && arr[2] == comp[(i + 2) % 15]) {
            pos = i + 4;
            if (i > 12) {
                pos %= 15, div++;
            }
            break;
        }
    }
    if (pos % 3 == 0 && pos % 5 == 0) {
        cout << "FizzBuzz" << '\n';
    }
    else {
        if (pos % 3 == 0) {
            cout << "Fizz" << '\n';
        }
        else if (pos % 5 == 0) {
            cout << "Buzz" << '\n';
        }
        else {
            cout << 15 * div + pos << '\n';
        }
    }
}
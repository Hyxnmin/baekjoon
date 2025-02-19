#include <iostream>
#include<string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str[3];
    int arr[3] = { 0 }, div = 0, comp[15] = { 0 }, pos = 0;

    for (int i = 0;i < 15;++i) {
        if (i + 1 % 3 != 0 && i + 1 % 5 != 0) {
            comp[i] = i + 1;
        }
    }

    for (int i = 0;i < 3;++i) {
        getline(cin, str[i]);
        if (str[i] != "Fizz" && str[i] != "Buzz") {
            arr[i] = stoi(str[i]) % 15;
            div = stoi(str[i]) / 15;
        }
    }

    for (int i = 0;i < 13;++i) {
        if (arr[i] == comp[i] && arr[i + 1] == comp[i + 1] && arr[i + 2] == comp[i + 2]) {
            pos = i + 3;
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
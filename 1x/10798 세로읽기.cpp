#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str[15];
    int size[5] = { 0 }, MAX = 0;

    for (int i = 0; i < 5; ++i) {
        getline(cin, str[i]);
        size[i] = str[i].size();
        if (size[i] > MAX)MAX = size[i];
    }

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (size[j] > i) {
                cout << str[j][i];
            }
        }
    }
}
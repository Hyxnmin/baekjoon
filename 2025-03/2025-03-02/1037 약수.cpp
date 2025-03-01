#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, a, MAX = 0, MIN = 1987654321;

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> a;

        if (MAX < a) {
            MAX = a;
        }
        if (MIN > a) {
            MIN = a;
        }
    }
    cout << MAX * MIN;
}
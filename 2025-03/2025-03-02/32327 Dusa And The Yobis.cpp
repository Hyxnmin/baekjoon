#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dusa, n;

    cin >> dusa;

    while (!cin.eof()) {
        cin >> n;
        if (dusa > n) {
            dusa += n;
        }
        else {
            break;
        }
    }

    cout << dusa;

}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n;

    cin >> n;

    if (n % 7 == 1 || n % 7 == 3)cout << "CY";
    else cout << "SK";

}
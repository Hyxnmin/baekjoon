#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, MIN1 = INT_MAX, MAX1 = INT_MIN, MIN2 = INT_MAX, MAX2 = INT_MIN;

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> a >> b;
        if (MIN1 > a)MIN1 = a;
        if (MAX1 < a)MAX1 = a;
        if (MIN2 > b)MIN2 = b;
        if (MAX2 < b)MAX2 = b;
    }

    cout << (MAX1 - MIN1) * (MAX2 - MIN2);

    return 0;
}
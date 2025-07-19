#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x[10001] = { 0 };

    cin >> n >> k;

    for (int i = 0;i < n;++i)cin >> x[i];

    sort(x, x + n, greater<int>());

    cout << x[k - 1];
}
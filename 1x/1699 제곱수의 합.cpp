#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, cnt = 0;
    long long res[200001] = { 0 }, num[200001] = { 0 };

    cin >> n;

    for (int i = 1;i * i <= n;++i) {
        num[cnt++] = i * i;
    }

    for (int i = 0;i <= n;++i) {
        for (int j = 0;j < cnt;++j) {
            if (res[i + num[j]] == 0) {
                res[i + num[j]] = res[i] + 1;
            }
            else {
                res[i + num[j]] = min(res[i + num[j]], res[i] + 1);
            }
        }
    }
    cout << res[n];
}

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, t, p, size[6] = { 0 }, t_sum = 0;

    cin >> n;
    for (int i = 0;i < 6;++i) {
        cin >> size[i];
    }
    cin >> t >> p;

    for (int i = 0;i < 6;++i) {
        t_sum += size[i] / t;
        if (size[i] % t != 0) {
            t_sum++;
        }
    }

    cout << t_sum << '\n';
    cout << n / p << ' ' << n % p;

}
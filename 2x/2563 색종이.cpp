#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, paper[101][101] = { 0 }, x, y, res = 0;

    cin >> n;

    for (int i = 0;i < n;++i) {
        cin >> x >> y;
        for (int j = x;j < x + 10;++j) {
            for (int l = y;l < y + 10;++l) {
                if (paper[j][l] == 0) {
                    paper[j][l] = 1;
                    res++;
                }
            }
        }
    }

    cout << res;
    return 0;
}
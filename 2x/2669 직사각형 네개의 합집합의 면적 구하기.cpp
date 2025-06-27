#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, x2, y1, y2, arr[101][101] = { 0 }, cnt = 0;

    for (int i = 0;i < 4;++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1;j < y2;++j) {
            for (int l = x1;l < x2;++l) {
                if (arr[j][l] == 0) {
                    arr[j][l] = 1;
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
#include <iostream>
#include <map>
#include <climits>
using namespace std;

int find_least_num(int ck[]) {
    int n = 0, mul = 1000, MIN = INT_MAX;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            n += ck[i + j] * mul;
            mul /= 10;
        }
        if (MIN > n)MIN = n;
        mul = 1000, n = 0;
    }

    return MIN;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int>check;

    int clock_num[7] = { 0 }, least_ck = INT_MAX, cnt = 1, n = 0, mul = 1000, ck_num = 0;

    for (int i = 0; i < 4; ++i)cin >> clock_num[i];
    for (int i = 4; i < 7; ++i)clock_num[i] = clock_num[i - 4];

    least_ck = find_least_num(clock_num);

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            for (int k = 1; k <= 9; ++k) {
                for (int l = 1; l <= 9; ++l) {
                    clock_num[0] = clock_num[4] = i, clock_num[1] = clock_num[5] = j, clock_num[2] = clock_num[6] = k, clock_num[3] = l;
                    ck_num = find_least_num(clock_num);
                    if (check.find(ck_num) == check.end()) {
                        if (ck_num >= least_ck) {
                            goto end;
                        }
                        cnt++;
                        check.insert({ ck_num,1 });
                    }
                }
            }
        }
    }
end:
    cout << cnt;
    return 0;
}
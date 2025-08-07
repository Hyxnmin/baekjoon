#include <iostream>

using namespace std;

long long mem[21] = { 0 };

long long fac(long long x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    if (mem[x] != 0) {
        return mem[x];
    }
    return mem[x] = x * fac(x - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    cout << fac(n);
}
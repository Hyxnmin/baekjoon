#include <iostream>
#include <set>

using namespace std;

set<int>A, B;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, cnt1 = 0, cnt2 = 0;

    cin >> a >> b;

    for (int i = 0;i < a;++i) {
        cin >> n;
        A.insert(n);
    }

    for (int i = 0;i < b;++i) {
        cin >> n;
        B.insert(n);
    }

    for (auto iter : A) {
        if (B.find(iter) != B.end()) {
            cnt1++;
        }
    }

    for (auto iter : B) {
        if (A.find(iter) != A.end()) {
            cnt2++;
        }
    }
    cout << B.size() - cnt1 + A.size() - cnt2;
}
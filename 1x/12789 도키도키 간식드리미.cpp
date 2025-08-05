#include <iostream>
#include <stack>

using namespace std;

stack<int>s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt = 1;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        if (cnt != n) s.push(n);
        else cnt++;
        if (s.empty() == 0 && s.top() == cnt) {
            while (s.empty() == 0 && s.top() == cnt) {
                cnt++;
                s.pop();
            }
        }
    }
    if (s.empty() != 0)cout << "Nice";
    else cout << "Sad";
}
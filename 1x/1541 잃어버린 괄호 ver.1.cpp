#include <iostream>
#include <string>
#include <queue>

using namespace std;

deque<int>n;
deque<char>s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string eq;
    int num = 0, tmp = 0, tmp2 = 0, cnt = 0;

    getline(cin, eq);

    for (int i = 0; i < eq.size(); ++i) {
        if (eq[i] == '+' || eq[i] == '-' || i == eq.size() - 1) {
            if (i == eq.size() - 1) {
                num += eq[i] - '0';
            }
            else {
                num /= 10;
            }
            if (!s.empty()) {
                if (s.back() == '+') {
                    s.pop_back();
                    num += n.back();
                    n.pop_back();
                }
            }
            n.push_back(num);
            if (eq[i] == '+' || eq[i] == '-') {
                s.push_back(eq[i]);
            }
            num = 0;
        }
        else {
            num += eq[i] - '0';
            num *= 10;
        }
    }
    cnt = s.size();
    for (int i = 0; i < cnt; ++i) {
        tmp = n.front();
        n.pop_front();
        tmp2 = n.front();
        n.pop_front();
        if (s.front() == '+') {
            n.push_front(tmp + tmp2);
        }
        else if (s.front() == '-') {
            n.push_front(tmp - tmp2);
        }
        s.pop_front();
    }
    cout << n.front();
}
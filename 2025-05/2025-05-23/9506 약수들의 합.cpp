#include <iostream>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res = 0, s = 0;
    list<int> arr;

    while (1) {
        cin >> n;
        if (n == -1) {
            break;
        }
        for (int i = 1; i < n; ++i) {
            if (n % i == 0) {
                arr.push_back(i);
            }
        }
        for (auto iter = arr.begin(); iter != arr.end(); ++iter) {
            res += *iter;
        }
        if (n == res) {
            s = arr.size();
            cout << n << " = ";
            for (int i = 0; i < s - 1; ++i) {
                cout << arr.front() << " + ";
                arr.pop_front();
            }
            cout << arr.front() << '\n';
        }
        else {
            cout << n << " is NOT perfect." << '\n';
        }
        arr.clear();
        res = 0;
    }

    return 0;
}
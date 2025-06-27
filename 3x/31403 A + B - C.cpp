#include<iostream>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str_a, str_b, str_sum;
    int a, b, c, sum;

    cin >> str_a >> str_b >> c;

    a = stoi(str_a);
    b = stoi(str_b);

    str_sum = str_a + str_b;
    sum = stoi(str_sum);

    cout << a + b - c << '\n';
    cout << sum - c << '\n';

    return 0;
}
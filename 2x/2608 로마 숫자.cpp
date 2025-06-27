#include <iostream>
#include <string>

using namespace std;

int comp(string str) {
    int sum = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'M')sum += 1000;
        else if (str[i] == 'C' && str[i + 1] == 'M')sum += 900, i++;
        else if (str[i] == 'D')sum += 500;
        else if (str[i] == 'C' && str[i + 1] == 'D')sum += 400, i++;
        else if (str[i] == 'C')sum += 100;
        else if (str[i] == 'X' && str[i + 1] == 'C')sum += 90, i++;
        else if (str[i] == 'L')sum += 50;
        else if (str[i] == 'X' && str[i + 1] == 'L')sum += 40, i++;
        else if (str[i] == 'X')sum += 10;
        else if (str[i] == 'I' && str[i + 1] == 'X')sum += 9, i++;
        else if (str[i] == 'V')sum += 5;
        else if (str[i] == 'I' && str[i + 1] == 'V')sum += 4, i++;
        else if (str[i] == 'I')sum += 1;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    string str1, str2, res[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
    int sum = 0, num[13] = { 1000,900,500,400, 100,90,50,40,10,9,5,4,1 };

    getline(cin, str1);
    getline(cin, str2);

    sum = comp(str1) + comp(str2);
    cout << sum << '\n';
    for (int i = 0; i < 13; ++i) {
        while (sum >= num[i]) {
            cout << res[i];
            sum -= num[i];
        }
    }
}
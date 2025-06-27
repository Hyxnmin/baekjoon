#include<iostream>
#include<string>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int i;
	string str;

	getline(cin, str);
	cin >> i;

	cout << str[i - 1];

	return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
	}

	cout << str;

	return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str1, str2;

	getline(cin, str1);
	getline(cin, str2);

	if (str1.length() >= str2.length()) {
		cout << "go" << '\n';
	}
	else {
		cout << "no" << '\n';
	}

	return 0;
}
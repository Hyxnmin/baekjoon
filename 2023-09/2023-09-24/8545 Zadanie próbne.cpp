#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str;

	getline(cin, str);

	reverse(str.begin(), str.end());

	cout << str;

	return 0;
}
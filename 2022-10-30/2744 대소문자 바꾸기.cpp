#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {

		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= ' ';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += ' ';
		}
	}

	cout << str;

}
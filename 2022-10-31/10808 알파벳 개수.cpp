#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str;
	int alphabet_count[26] = { 0 };

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		alphabet_count[str[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << alphabet_count[i] << ' ';
	}
}
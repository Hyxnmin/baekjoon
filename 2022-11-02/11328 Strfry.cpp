#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, cnt = 0, alphabet1[26] = { 0 }, alphabet2[26] = { 0 };
	string str1, str2;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2;
		for (int j = 0; j < str1.size(); j++) {
			alphabet1[str1[j] - 'a']++;
		}
		for (int j = 0; j < str2.size(); j++) {
			alphabet2[str2[j] - 'a']++;
		}
		for (int j = 0; j < str1.size(); j++) {
			if (alphabet2[str1[j]-'a'] > 0 && alphabet2[str1[j] - 'a'] <= alphabet1[str1[j] - 'a']) {
				cnt++;
			}
		}
		if (cnt == str2.size()) {
			cout << "Possible" << '\n';
		}
		else {
			cout << "Impossible" << '\n';
		}
		fill(alphabet1, alphabet1 + 26, 0);
		fill(alphabet2, alphabet2 + 26, 0);
		cnt = 0;
	}
}
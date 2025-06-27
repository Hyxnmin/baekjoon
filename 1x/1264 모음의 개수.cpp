#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str;
	char moeum[10] = {'A', 'a','E','e','I','i','O','o','U','u' };
	int moeum_cnt = 0;

	while (1) {
		getline(cin, str);
		if (str == "#") {
			break;
		}
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < 10; j++) {
				if (str[i] == moeum[j]) {
					moeum_cnt++;
				}
			}
		}
		cout << moeum_cnt << '\n';
		moeum_cnt = 0;
	}
}
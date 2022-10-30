#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, str_size = 0;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		str_size = str.size();
		if (str_size >= 6 && str_size <= 9) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
}
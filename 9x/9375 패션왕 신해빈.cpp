#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n1, n2;
	string str1, str2;

	cin >> n1;

	while (n1--) {
		map<string, int>m;
		int ans = 1;

		cin >> n2;

		for (int i = 0; i < n2; ++i) {
			cin >> str1 >> str2;
			m[str2]++;
		}

		for (auto p : m) {
			ans *= (p.second + 1);
		}

		cout << ans - 1 << '\n';
	}

	return 0;
}
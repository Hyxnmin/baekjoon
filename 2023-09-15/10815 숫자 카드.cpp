#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, m, k;

	cin >> n;
	vector<int> num1(n, 0);

	for (int i = 0; i < n; ++i) {
		cin >> num1[i];
	}

	cin >> m;
	vector<int> num2(m, 0);

	for (int i = 0; i < m; ++i) {
		cin >> num2[i];
	}

	sort(num1.begin(), num1.end());

	for (int i = 0; i < m; ++i) {
		cout << (upper_bound(num1.begin(), num1.end(), num2[i]) - lower_bound(num1.begin(), num1.end(), num2[i])) << ' ';
	}

	return 0;
}
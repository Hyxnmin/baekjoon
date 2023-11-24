#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	vector<int>::iterator iter;

	cin >> n;
	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	for (iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << ' ';
	}

	return 0;
}
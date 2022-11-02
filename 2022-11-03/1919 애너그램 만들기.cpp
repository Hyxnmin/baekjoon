#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int arr[2][26] = { 0 }, res = 0;
	string str1, str2;

	cin >> str1 >> str2;

	for (auto i : str1) {
		arr[0][i - 'a']++;
	}

	for (auto i : str2) {
		arr[1][i - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		res += abs(arr[0][i] - arr[1][i]);
	}

	cout << res;
}
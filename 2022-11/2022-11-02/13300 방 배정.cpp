#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, k, s, g, arr[2][7] = { 0 }, cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> s >> g;
		arr[s][g]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			cnt += arr[i][j] / k;
			if (arr[i][j] % k > 0) {
				cnt++;
			}
		}
	}
	cout << cnt;
}
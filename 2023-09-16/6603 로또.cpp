#include<iostream>

using namespace std;

int n, arr[14] = { 0 }, visited[14] = { 0 }, s[14] = { 0 };

void backtracking(int x) {

	if (x == 7) {
		for (int i = 1; i <= 6; ++i) {
			cout << s[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0 && s[x-1]<arr[i]) {
			visited[i] = 1;
			s[x] = arr[i];
			backtracking(x+ 1);
			visited[i] = 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	while (1) {

		cin >> n;

		if (n == 0) {
			break;
		}

		for (int i = 1; i <= n; ++i) {
			cin >> arr[i];
		}

		backtracking(1);
		cout << '\n';

	}

	return 0;
}
#include<iostream>

using namespace std;

int n, s, arr[21] = { 0, }, visited[21] = { 0, }, cnt = 0;

void backtracking(int x,int res) {

	if (x == n){
		if (res == s) {
			cnt++;
		}
		return;
	}

	backtracking(x + 1, res + arr[x]);
	backtracking(x + 1, res);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	cin >> n >> s;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	backtracking(0, 0);

	if (s == 0)cnt--;

	cout << cnt;

	return 0;
}
#include<iostream>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, score[100001] = { 0 },rank;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> rank;
		score[rank] = rank - i;
	}

	for (int i = 1; i <= n; ++i) {
		cout << score[i] << '\n';
	}

	return 0;
}
#include<iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, sum = 0;

	while (1) {

		cin >> n;

		if (n == 0) {
			break;
		}

		sum = 0;

		for (int i = 1; i <= n; ++i) {
			sum += i;
		}

		cout << sum << '\n';

	}
}
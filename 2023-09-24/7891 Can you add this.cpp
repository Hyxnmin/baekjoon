#include<iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, num1, num2;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> num1 >> num2;
		cout << num1 + num2 << '\n';
	}

	return 0;
}
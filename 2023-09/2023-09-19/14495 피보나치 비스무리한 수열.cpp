#include<iostream>

using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	long long n, arr[117] = { 0 };

	cin >> n;

	arr[0] = arr[1] = arr[2] = 1;

	for (int i = 3; i < n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 3];
	}
	
	cout << arr[n - 1];

	return 0;
}
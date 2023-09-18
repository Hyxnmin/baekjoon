#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, arr[1001] = { 0 }, res=1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; ++i) {
		if (res < arr[i]) {
			break;
		}

		res += arr[i];
	}

	cout << res;

	return 0;
}
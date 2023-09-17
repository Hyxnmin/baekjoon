#include<iostream>
#include<algorithm>

using namespace std;
#define INF 1e10

int arr[100001] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, sum = 0, x, y, min = INF;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int lp = 0, rp = n - 1;

	while (lp < rp) {

		sum = arr[rp] + arr[lp];

		if (min > abs(sum)) {
			min = abs(sum);
			x = arr[lp];
			y = arr[rp];
			if (sum == 0) {
				break;
			}
		}

		if (sum < 0) {
			lp++;
		}
		else {
			rp--;
		}
	}

	cout << x << ' ' << y;

}
#include<iostream>

using namespace std;

#define INF 1987654321

int arr[100001] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, s, lp = 0, rp = 0, sum = 0, res = INF;

	cin >> n >> s;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	while (lp <= rp && rp <= n) {
		if (sum >= s && res > rp - lp) {
			res = rp - lp;
		}
		if (sum > s) {
			sum -= arr[lp++];
		}
		else {
			sum += arr[rp++];
		}	
	}

	if (res == INF) {
		cout << 0;
	}
	else {
		cout << res;
	}

	return 0;
}
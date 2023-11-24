#include<iostream>

using namespace std;

#define INF 1987654321

long long int arr[1000001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	long long int n, k, a, b, max = -1, min = INF, s = 0, e = 0, res = 0;

	cin >> n >> k;
	
	for (long long int i = 0; i < n; ++i) {
		cin >> a >> b;
		for (long long int j = a+1; j <= b; ++j) {
			arr[j] += 1;
		}
		if (min > a) {
			min = a;
		}
		if (max < b) {
			max = b;
		}
	}


	while (s <= e && e <= b) {
		if (k == res) {
			cout << s << ' ' << e;
			return 0;
		}
		else if (k > res) {
			res += arr[++e];
		}
		else if (k < res) {
			res -= arr[++s];
		}
	}

	cout << 0 << ' ' << 0;

	return 0;
}
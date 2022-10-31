#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, x, start = 0, end = 0, SUM = 0, cnt = 0;
	long long arr[100001] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> x;
	
	start = n-1;

	sort(arr, arr + n);

	while (end<start) {
		SUM = arr[start] + arr[end];
		if (SUM==x) {
			cnt++;
		}
		if (SUM <= x) {
			end++;
		}
		else if (SUM > x) {
			start--;
		}
	}

	cout << cnt;
}
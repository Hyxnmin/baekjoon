#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	long long n, m, res = 0;

	cin >> n >> m;

	res = (n > m) ? (n - m) : (m - n);
	res = (res < 0) ? (-res) : (res);

	cout << res;
}
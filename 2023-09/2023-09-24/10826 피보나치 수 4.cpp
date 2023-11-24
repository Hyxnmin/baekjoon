#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int n;

string fibo(string x, string y) {

	string result;
	int num = 0, rnd = 0;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	while (x.length() < y.length()) {
		x += '0';
	}

	while (x.length() > y.length()) {
		y += '0';
	}

	for (int i = 0; i < x.length(); ++i) {
		num = (x[i] - '0' + y[i] - '0' + rnd) % 10;
		result += to_string(num);
		rnd = (x[i] - '0' + y[i] - '0' + rnd) / 10;
	}

	if (rnd != 0) {
		result += to_string(rnd);
	}

	reverse(result.begin(), result.end());

	return result;

}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string dp[10001];

	cin >> n;

	dp[0] = '0';
	dp[1] = '1';
	for (int i = 2; i <= n; ++i) {
		dp[i] = fibo(dp[i - 1], dp[i - 2]);
	}

	cout << dp[n];

	return 0;
}
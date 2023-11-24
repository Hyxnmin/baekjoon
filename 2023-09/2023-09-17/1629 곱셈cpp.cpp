#include<iostream>

using namespace std;

long long POW(long long a, long long b, long long c) {

	if (b == 1) {
		return a % c;
	}

	long long val = POW(a, b / 2, c);

	val = val * val % c;

	if (b % 2 == 0) {
		return val;
	}
	else {
		return val * a % c;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	long long a, b, c;

	cin >> a >> b >> c;

	cout << POW(a, b, c);

}
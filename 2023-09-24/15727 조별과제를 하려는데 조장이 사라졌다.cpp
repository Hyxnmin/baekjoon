#include<iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;

	cin >> n;

	cout << (n % 5 != 0 ? n / 5 + 1 : n / 5);
	
	return 0;
}
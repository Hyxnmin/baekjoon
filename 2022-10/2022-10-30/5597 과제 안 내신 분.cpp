#include<bits/stdc++.h>

using namespace std;

int main() {

	int n, check_assignment[31] = { 0 };

	for (int i = 1; i < 31; i++) {
		cin >> n;
		check_assignment[n]++;
	}

	for (int i = 1; i < 31; i++) {

		if (!check_assignment[i]) {
			cout << i << '\n';
		}

	}

}
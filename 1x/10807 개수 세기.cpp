#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, v, input, arr1[101] = { 0 }, arr2[101] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input < 0) {
			arr2[abs(input)]++;
		}
		else {
			arr1[input]++;
		}
	}

	cin >> v;

	if (v < 0) {
		cout << arr2[abs(v)];
	}
	else {
		cout << arr1[v];
	}
	
}
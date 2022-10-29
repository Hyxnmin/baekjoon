#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, v, input, arr[101] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		arr[input]++;
	}

	cin >> v;

	cout << arr[v];
}
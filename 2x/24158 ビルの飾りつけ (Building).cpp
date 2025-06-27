#include<iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, arr[10001] = { 0 }, t[10001] = { 0 }, max = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		t[i] = 1;
	}

	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j){
			if (arr[i] > arr[j] && t[i] < t[j] + 1) {
				t[i] = t[j] + 1;
			}
		}
	}
	
	for (int i = 0; i < n; ++i) {
		if (max < t[i]) {
			max = t[i];
		}
	}

	cout << max;

	return 0;
}
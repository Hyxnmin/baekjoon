#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int arr[300001] = { 0 };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n1, n2 = 0, sum = 0;
	double avg1 = 0.0, avg2 = 0.0;

	cin >> n1;
	if (n1 != 0){
		for (int i = 0; i < n1; ++i) {
			cin >> arr[i];
		}
		sort(arr, arr + n1);
		avg1 = floor((n1 * 0.15) + 0.5);
		n2 = (int)avg1;

		for (int i = n2; i < n1 - n2; ++i) {
			sum += arr[i];
		}
		avg2 = floor((double)sum / (n1 - (2 * n2)) + 0.5);
		cout << (int)avg2;
	}
	else {
		cout << 0;
	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int room_num = 0, num_count[10] = { 0 }, MAX = 0;

	cin >> room_num;

	while (room_num > 0) {
		num_count[room_num % 10]++;
		room_num /= 10;
	}
	
	if (num_count[6] - num_count[9] > 1) {
		int tmp = (num_count[6] - num_count[9]) / 2;
		num_count[6] -= tmp;
		num_count[9] += tmp;
	}
	else if (num_count[9] - num_count[6] > 1) {
		int tmp = (num_count[9] - num_count[6]) / 2;
		num_count[9] -= tmp;
		num_count[6] += tmp;

	}
	for (int i = 0; i < 10; i++) {
		if (MAX < num_count[i]) {
			MAX = num_count[i];
		}
	}
	cout << MAX;
}
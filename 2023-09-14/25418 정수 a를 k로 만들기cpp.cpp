#include<iostream>
#include<queue>
using namespace std;

int cnt[1000001] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int a, k;

	cin >> a >> k;

	while (a <= k) {
		
		if (a + 1 <= k) {
			cnt[a + 1] = cnt[a + 1] != 0 ? cnt[a] + 1 < cnt[a + 1] ? cnt[a] + 1 : cnt[a + 1] : cnt[a] + 1;
		}
		if (a * 2 <= k) {
			cnt[a * 2] = cnt[a * 2] != 0 ? cnt[a] + 1 < cnt[a * 2] ? cnt[a] + 1 : cnt[a * 2] : cnt[a] + 1;
		}
		a++;
	}

	cout << cnt[k];

	return 0;
}
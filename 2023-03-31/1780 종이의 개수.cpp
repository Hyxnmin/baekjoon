#include<bits/stdc++.h>

using namespace std;

int arr[3000][3000];
int res[3];
void div_paper(int x, int y, int size) {
	if (size == 1) {
		res[arr[x][y] + 1]++;
		return;
	}

	int cnt[3] = { 0 };

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			cnt[arr[i][j] + 1]++;

			if ((cnt[0] != 0 && (cnt[1] != 0 || cnt[2] != 0)) || cnt[1] != 0 && (cnt[0] != 0 || cnt[2] != 0) ||(cnt[2] != 0 && (cnt[0] != 0 || cnt[1] != 0))) {
				goto out;
			}
		}
	}
	if (cnt[0] == size * size) {
		res[0]++;
		return;
	}
	else if (cnt[1] == size * size) {
		res[1]++;
		return;
	}
	else if (cnt[2] == size * size) {
		res[2]++;
		return;
	}

out:
	div_paper(x, y, size / 3);
	div_paper(x + size / 3, y, size / 3);
	div_paper(x + size * 2 / 3, y, size / 3);
	div_paper(x, y + size/3, size / 3);
	div_paper(x + size / 3, y + size / 3, size / 3);
	div_paper(x + size * 2 / 3, y + size / 3, size / 3);
	div_paper(x, y + size * 2 / 3, size / 3);
	div_paper(x + size / 3, y + size * 2 / 3, size / 3);
	div_paper(x + size * 2 / 3 , y + size * 2 / 3 , size / 3);
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	div_paper(0, 0, n);

	cout << res[0] << '\n' << res[1] << '\n' << res[2] << '\n';
}
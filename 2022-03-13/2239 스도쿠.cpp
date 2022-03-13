#include<bits/stdc++.h>
using namespace std;
int sudoku[9][9] = { 0 }, cnt = 0;
pair<int, int>blank[81];
void back(int n) {
	int ck = 1, x = blank[n].first, y = blank[n].second;
	if (n == cnt) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << sudoku[i][j];
			}
			cout << '\n';
		}
		exit(0);
	}
	for (int i = 1; i <= 9; i++) {
		ck = 1;
		for (int j = 0; j < 9; j++) {
			if (sudoku[x][j] == i || sudoku[j][y] == i) {
				ck = 0;
			}
		}
		if (ck) {
			int mx = x / 3 * 3, my = y / 3 * 3;
			for (int j = mx; j < mx + 3; j++) {
				for (int l = my; l < my + 3; l++) {
					if (sudoku[j][l] == i) {
						ck = 0;
						break;
					}
				}
			}
		}
		if (ck) {
			sudoku[x][y] = i;
			back(n + 1);
			sudoku[x][y] = 0;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%1d", &sudoku[i][j]);
			if (!sudoku[i][j]) {
				blank[cnt].first = i, blank[cnt++].second = j;
			}
		}
	}
	back(0);
}
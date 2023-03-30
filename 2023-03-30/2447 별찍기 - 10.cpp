#include<bits/stdc++.h>
using namespace std;

void draw_star(int x, int y, int n) {

	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
		cout << ' ';
	}
	else if (n / 3 == 0) {
		cout << '*';
	}
	else draw_star(x, y, n / 3);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			draw_star(i, j, n);
		}
		cout << '\n';
	}
}
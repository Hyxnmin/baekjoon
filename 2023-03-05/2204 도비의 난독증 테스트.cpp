#include<bits/stdc++.h>
using namespace std;

pair<string, string>p[1001];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, cnt = 0;
	string str[1001];


	while (1) {
		cin >> n;
		if (n != 0) {
			for (int i = 0; i < n; i++) {
				cin >> p[i].second;
				p[i].first = p[i].second;
				transform(p[i].first.begin(), p[i].first.end(), p[i].first.begin(), ::tolower);
			}

			sort(p, p + n);
			cout << p[0].second << '\n';
		}
		else {
			break;
		}
	}

}
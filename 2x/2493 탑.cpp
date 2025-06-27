#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>>s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a,n;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> n;
		while (!s.empty()) {
			if (s.top().first > n) {
				cout << s.top().second << ' ';
				break;
			}
			s.pop();
		}
		if (s.empty()) {
			cout << 0 << ' ';
		}
		s.push({ n,i + 1 });
	}
}
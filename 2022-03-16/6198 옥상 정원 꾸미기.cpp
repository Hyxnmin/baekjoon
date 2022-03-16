#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int n;
long long ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long tower_height;
	cin >> n;
	while (n--) {
		cin >> tower_height;
		while (!s.empty() && s.top() <= tower_height) {
			s.pop();
		}
		ans += s.size();
		s.push(tower_height);
	}
	cout << ans;
}
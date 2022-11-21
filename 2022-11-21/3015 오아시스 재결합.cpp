#include<bits/stdc++.h>

using namespace std;

stack<pair<int,int>>s;

int main() {
	int a, n, t = 0, same = 0;
	long long cnt = 0;

	cin >> a;
	
	for (int i = 0; i < a; i++) {
		cin >> n;

		same = 1;
		while (!s.empty() && s.top().first < n) {
			t += s.top().second;
			s.pop();
		}
		if (!s.empty()) {
			if (s.top().first == n) {
				t += s.top().second;
				same = s.top().second + 1;
				if (s.size() > 1) {
					t++;
				}
				s.pop();
			}
			else {
				t++;
			}
		}
		s.push({ n,same });

	}

	cout << cnt;
}
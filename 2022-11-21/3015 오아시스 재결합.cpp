#include<bits/stdc++.h>

using namespace std;

stack<pair<int,int>>s;

int main() {
	int a, n, same = 0;
	long long t = 0;

	cin >> a;
	
	for (int i = 0; i < a; i++) {
		cin >> n;
		same = 1;
		while (!s.empty() && s.top().first <= n) {
			t += s.top().second;
			if (s.top().first == n) {
				same += s.top().second;
			}
			s.pop();
		}
		if (!s.empty()) {
			t++;
		}

		s.push({ n,same });

	}

	cout << t;
}
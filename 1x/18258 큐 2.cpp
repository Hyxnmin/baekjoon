#include<bits/stdc++.h>

using namespace std;

queue<int>q;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n,c;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		
		if (str == "push") {
			cin >> c;
			q.push(c);
		}
		else if (str == "empty") {
			cout << q.empty() << '\n';
		}
		else if (str == "size") {
			cout << q.size() << '\n';
		}
		else if (str == "front") {
			(!q.empty()) ? (cout << q.front() << '\n') : (cout << -1 << '\n');
		}
		else if (str == "back") {
			(!q.empty()) ? (cout << q.back() << '\n') : (cout << -1 << '\n');
		}
		else if (str == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
	}
}
#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		cout << str.front() << str.back() << '\n';
	}
}
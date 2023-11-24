#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	list<char> list_str;
	string str;
	int n;
	char c, s;

	getline(cin, str);

	for (auto s : str) {
		list_str.push_back(s);
	}

	auto iter = list_str.end();

	cin >> n;

	while (n--) {

		cin >> c;
		switch (c) {
		case 'P': cin >> s; list_str.insert(iter, s); break;
		case 'L': if (iter != list_str.begin()) { iter--; } break;
		case 'D': if (iter != list_str.end()) { iter++; } break;
		case 'B': if (iter != list_str.begin()) { iter--; iter = list_str.erase(iter); } break;
		}
	}

	for (auto i : list_str) {
		cout << i;
	}
}
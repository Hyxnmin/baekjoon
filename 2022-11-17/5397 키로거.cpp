#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	
	int n;
	string str;
	
	cin >> n;

	while (n--) {
		list<char>list_str = {};
		auto iter = list_str.begin();

		cin >> str;
		for (auto s : str) {
			switch (s) {
			case '<': if (iter != list_str.begin()) { iter--; } break;
			case '>': if (iter != list_str.end()) { iter++; } break;
			case '-': if (iter != list_str.begin()) { iter--; iter = list_str.erase(iter); }break;
			default:list_str.insert(iter, s); break;
			}
		}

		for (auto i : list_str) {
			cout << i;
		}
		cout << '\n';
	}
}
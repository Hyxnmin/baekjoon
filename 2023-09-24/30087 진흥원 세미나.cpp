#include<iostream>
#include<map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	string str;
	map<string, string>m;

	m.insert({ "Algorithm","204" });
	m.insert({ "DataAnalysis","207" });
	m.insert({ "ArtificialIntelligence","302" });
	m.insert({ "CyberSecurity","B101" });
	m.insert({ "Network","303" });
	m.insert({ "Startup","501" });
	m.insert({ "TestStrategy","105" });

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> str;
		cout << m[str] << '\n';
	}

	return 0;
}
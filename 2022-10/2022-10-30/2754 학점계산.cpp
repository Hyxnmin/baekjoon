#include<bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str, str_arr[13] = { "A+" ,"A0","A-","B+" ,"B0","B-" ,"C+" ,"C0","C-","D+" ,"D0","D-","F" };
	double credit[13] = { 4.3,4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.3,1.0,0.7,0.0 };

	cin >> str;

	for (int i = 0; i < 13; i++) {
		if (str==str_arr[i]) {
			cout << fixed;
			cout.precision(1);
			cout << (double)credit[i];
		}
	}

}
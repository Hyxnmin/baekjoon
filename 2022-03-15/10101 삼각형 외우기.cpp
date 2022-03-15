#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int angle1, angle2, angle3;
	cin >> angle1 >> angle2 >> angle3;
	if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
		cout << "Equilateral";
	}
	else if (angle1 + angle2 + angle3 == 180) {
		if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
			cout << "Isosceles";
		}
		else {
			cout << "Scalene";
		}
	}
	else if (angle1 + angle2 + angle3 != 180) {
		cout << "Error";
	}
}
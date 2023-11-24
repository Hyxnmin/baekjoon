#include<bits/stdc++.h>
using namespace std;
#define TRIANGLE_ANGLE_MAX 180
#define TRIANGLE_ANGLE_AVG 60
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int angle1, angle2, angle3;
	cin >> angle1 >> angle2 >> angle3;
	if (angle1 == TRIANGLE_ANGLE_AVG && angle2 == TRIANGLE_ANGLE_AVG && angle3 == TRIANGLE_ANGLE_AVG) {
		cout << "Equilateral";
	}
	else if (angle1 + angle2 + angle3 == TRIANGLE_ANGLE_MAX) {
		if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
			cout << "Isosceles";
		}
		else {
			cout << "Scalene";
		}
	}
	else if (angle1 + angle2 + angle3 != TRIANGLE_ANGLE_MAX) {
		cout << "Error";
	}
}
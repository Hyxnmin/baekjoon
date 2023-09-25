#include<iostream>

using namespace std;

typedef struct cake {
	int x, y, z;
}cake;
cake a, c;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	cin >> a.x >> a.y >> a.z;
	cin >> c.x >> c.y >> c.z;

	cout << c.x - a.z << ' ' << c.y / a.y << ' ' << c.z - a.x;

	return 0;
}
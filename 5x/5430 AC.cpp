#include<iostream>
#include<deque>

using namespace std;

deque<int> dq;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t, n, num = 0, r_cnt = 0;
	string p, x;

	cin >> t;

	while (t--) {
		num = 0, r_cnt = 0;

		cin >> p;
		cin >> n;
		cin >> x;
		
		for (int i = 1; i < x.size(); ++i) {
			if (x[i] != ']' && x[i] != ',') {
				if (num != 0) {
					num *= 10;
				}
				num += x[i] - '0';
			}
			else {
				if (num != 0) {
					dq.push_back(num);
					num = 0;
				}
			}
		}

		for (int i = 0; i < p.size(); ++i) {
			if (p[i] == 'R') {
				r_cnt++;
			}
			else if (p[i] == 'D') {
				if (dq.empty() == 1) {
					n--;
				}
				else if (r_cnt % 2 == 0) {
					dq.pop_front();
					n--;
				}
				else if (r_cnt % 2 == 1) {
					dq.pop_back();
					n--;
				}
			}
		}

		if (n>=0) {
			if (r_cnt % 2 == 0) {
				cout << '[';
				while (dq.empty() == 0) {
					cout<< dq.front();
					dq.pop_front();
					if (dq.size() != 0) {
						cout << ',';
					}
					
				}
				cout << "]\n";
			}
			else if (r_cnt % 2 == 1) {
				cout << '[';
				while (dq.empty() == 0) {
					cout<<dq.back();
					dq.pop_back();
					if (dq.size() != 0) {
						cout << ',';
					}
				}
				cout << "]\n";
			}
		}
		else {
			cout << "error\n";
		}
	}

	return 0;
}
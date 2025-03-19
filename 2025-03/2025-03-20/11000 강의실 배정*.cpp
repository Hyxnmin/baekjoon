#include <iostream>
#include <queue>


using namespace std;

struct Time {
    long long st, ed;
    Time(long x, long y) : st(x), ed(y) {}
};

struct comp {
    bool operator()(Time x, Time y) {
        if (x.ed == y.ed)return x.st < y.st;
        return x.ed > y.ed;
    }
};

priority_queue<Time, vector<Time>, comp>pq;
queue<Time>q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long n, s, t, tmp, cnt = 0;

    cin >> n;


    for (int i = 0;i < n;++i) {
        cin >> s >> t;
        pq.push({ s,t });
    }

    while (!pq.empty()) {
        tmp = pq.top().ed;
        pq.pop();

        while (!pq.empty()) {
            if (tmp <= pq.top().st) {
                tmp = pq.top().ed;
                pq.pop();
            }
            else {
                q.push(pq.top());
                pq.pop();
            }
        }
        while (!q.empty()) {
            pq.push(q.front());
            q.pop();
        }
        cnt++;
    }

    cout << cnt;

}

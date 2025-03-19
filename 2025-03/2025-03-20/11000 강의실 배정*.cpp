#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct Time {
    long long st, ed;
}Time;

Time arr[200001];

bool comp(Time x, Time y) {
    if (x.st == y.st)return x.ed < y.ed;
    return x.st < y.st;
}

priority_queue<int, vector<int>, greater<int>>pq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;


    for (int i = 0; i < n; ++i) {
        cin >> arr[i].st >> arr[i].ed;
    }

    sort(arr, arr + n, comp);

    pq.push(arr[0].ed);

    for (int i = 1; i < n; ++i) {
        pq.push(arr[i].ed);
        if (pq.top() <= arr[i].st) {
            pq.pop();
        }
    }

    cout << pq.size();

}
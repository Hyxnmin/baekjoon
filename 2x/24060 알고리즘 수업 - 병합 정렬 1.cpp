#include <iostream>

using namespace std;

int k, c, res = -1, tmp[500001];

void merge(int A[], int l, int m, int r) {
    int i = l, j = m + 1, t = 0;

    while (i <= m && j <= r) {
        if (A[i] > A[j]) tmp[t++] = A[j++];
        else tmp[t++] = A[i++];
    }

    while (i <= m)tmp[t++] = A[i++];
    while (j <= r)tmp[t++] = A[j++];

    i = l, t = 0;

    while (i <= r) {
        c++;
        if (c == k) {
            res = tmp[t];
        }
        A[i++] = tmp[t++];
    }
}

void merge_sort(int A[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        merge_sort(A, l, mid);
        merge_sort(A, mid + 1, r);
        merge(A, l, mid, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, A[500001] = { 0 };

    cin >> n >> k;

    for (int i = 0;i < n;++i) cin >> A[i];
    merge_sort(A, 0, n - 1);

    cout << res;

    return 0;
}
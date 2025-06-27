#include <bits/stdc++.h>
using namespace std;
typedef struct p {
    int x, y, z;
}p;
queue<p>q;
typedef struct w {
    int v, t;
};
w box[101][101][101] = { 0 };
int dx[6] = { -1,1,0,0,0,0 }, dy[6] = { 0,0,-1,1,0,0, }, dz[6] = { 0,0,0,0,-1,1 };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m, h, cnt = 0,ex=0,ey=0,ez=0;
    cin >> m >> n >> h;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                cin >> box[i][j][l].v;
                if (!box[i][j][l].v) {
                    cnt++;
                }
                else if (box[i][j][l].v == 1) {
                    q.push({ i, j, l });
                }
            }
        }
    }
    while (cnt > 0 && !q.empty()) {
        ex = q.front().x, ey = q.front().y, ez = q.front().z;
        for (int i = 0; i < 6; i++) {
            int nx = ex + dx[i], ny = ey + dy[i], nz = ez + dz[i];
            if (nx > -1 && nx < h && ny > -1 && ny < n && nz > -1 && nz < m) {
                if (!box[nx][ny][nz].v && !box[nx][ny][nz].t) {
                    q.push({ nx,ny,nz }), cnt--;
                    box[nx][ny][nz].t = box[ex][ey][ez].t + 1;
                    box[nx][ny][nz].v = 1;
                }
            }
        }
        q.pop();
    }
    if (cnt != 0) {
        cout << -1;
    }
    else {
        cout << box[q.back().x][q.back().y][q.back().z].t;
    }
}
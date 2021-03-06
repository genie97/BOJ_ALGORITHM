#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
int T, N;
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
int INF = 987654321;
int main() {
	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &N);
		int map[100][100] = { 0, };
		int dist[100][100] = { 0, };
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				scanf("%1d", &map[i][j]);
				dist[i][j] = INF;
			}
		}
		queue<pair<int, int>>q;
		q.push({ 0,0 });
		while (!q.empty()) {
			int x = q.front().first;
			int y = q.front().second;
			int cost = dist[x][y];
			q.pop();
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				int w = map[nx][ny];
				if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
				if (dist[nx][ny] > cost + w) {
					dist[nx][ny] = cost + w;
					q.push({nx, ny});
				}
			}
		}

		printf("#%d %d\n", tc, dist[N - 1][N - 1]);
	}
}
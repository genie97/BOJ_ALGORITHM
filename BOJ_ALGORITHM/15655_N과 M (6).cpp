#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int num[10001], in[8];
vector<int> vt;
int N, M;
void make_comb(int idx, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < vt.size(); i++) {
			printf("%d ", vt[i]);
		}
		printf("\n");
		return;
	}
	for (int i = idx; i < N; i++) {
		if (num[in[i]] == 1) continue;
		num[in[i]] = 1;
		vt.push_back(in[i]);
		make_comb(i, cnt + 1);
		num[in[i]] = 0;
		vt.pop_back();
	}
}
int main() {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &in[i]);
	}
	sort(in, in + N);
	make_comb(0, 0);
}
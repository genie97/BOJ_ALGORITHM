#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int T, N;
int main() {
	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &N);
		if (N % 2 == 0) N -= 1;
		int i = 0, j = 0, k = 0;
		string in, dec1[501], dec2[501], input;
		cin >> in;
		dec1[j++] = in;
		getline(cin, in);
		stringstream ss(in);
		while (ss >> input) {
			i++;
			if (i <= N / 2) dec1[j++] = input;
			else dec2[k++] = input;
		}
		string res = "";
		for (int i = 0; i <= N / 2; i++) {
			res.append(dec1[i]);
			res.append(" ");
			res.append(dec2[i]);
			if (i != N / 2)res.append(" ");
		}
		cout << "#" << tc << " " << res << endl;
	}
}
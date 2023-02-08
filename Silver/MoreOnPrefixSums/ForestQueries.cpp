#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin>>n>>q;
	
	int arry[1001][1001] = {0};
	int arry2[1001][1001] = {0};

	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=n; j++) {
			char temp;
			cin>>temp;
			if (temp == '*') {
				arry[i][j] = 1;
				arry2[i][j] = 1;
			}
		}
	}

	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=n; j++) {
			arry[i][j] = arry[i-1][j]+arry[i][j-1]-arry[i-1][j-1]+arry2[i][j];
		}
	}

	int y1, x1, y2, x2;
	for (int i = 0; i<q; i++) {
		cin>>y1>>x1>>y2>>x2;
		cout<<arry[y2][x2]-arry[y1-1][x2]-arry[y2][x1-1]+arry[y1-1][x1-1]<<endl;
	}
	
}

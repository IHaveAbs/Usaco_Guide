#include <bits/stdc++.h>
using namespace std;

int n, m;

struct cow{
	int s, t, c;
};

struct conditioner{
	int a, b, p, m;
};

vector<struct conditioner> arry1;
int ans = INT_MAX;
int stall[101] =  {0};

int main() {
	cin>>n>>m;

	struct cow temp;
	for (int i = 0; i<n; i++) {
		cin>>temp.s>>temp.t>>temp.c;
		for (int j = temp.s; j<=temp.t; j++) {
			stall[j] = temp.c;
		}
		
	}

	struct conditioner temp1;
	for (int i = 0; i<m; i++) {
		cin>>temp1.a>>temp1.b>>temp1.p>>temp1.m;
		arry1.push_back(temp1);
	}

	for (int b = 0; b < (1<<m); b++) {
		vector<int> subset;
		for (int i = 0; i < m; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}

		int stall1[101] = {0};

		for (int i = 1; i<=100; i++) {
			stall1[i] = stall[i];
		}

		int money = 0;
		for (int i = 0; i<subset.size(); i++) {
			for (int j = arry1[subset[i]].a; j<=arry1[subset[i]].b; j++) {
				stall1[j] -= arry1[subset[i]].p;
			}
			money+=arry1[subset[i]].m;
		}
		bool works = true;
		for (int i = 1; i<=100; i++) {
			if (stall1[i] > 0) {
				works = false;
				break;
			}
		}

		if (works) {
			ans = min(ans, money);
		}

	}

	cout<<ans<<endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int m, n;
vector<int> arry[3001];
vector<int> visited(3001, 0);
bool cango[3001] = {0};
int acount = 0;

void dfs(int pos) {
	if (visited[pos] || cango[pos]) {
		return ;
	}
	
	visited[pos] = true;
	acount++;
	for (auto i: arry[pos]) {
		if (!visited[i]) dfs(i);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("closing.in", "r", stdin);
	freopen("closing.out", "w", stdout);
	
	cin>>n>>m;

	for (int i = 0; i<m; i++) {
		int a, b;
		cin>>a>>b;
		arry[a].push_back(b);
		arry[b].push_back(a);
	}

	vector<int> order(n);
	for (int i = 0; i<n; i++) {
		cin>>order[i];
	}

	dfs(1);
	if (acount == n) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}

	int temp;
	for (int i = 0; i<n-1; i++) {
		fill(visited.begin(), visited.end(), false);
		acount = 0;
		cango[order[i]] = 1;

		dfs(order[n-1]);


		if (acount == n-i-1) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	

}

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
int n, m;
vector<int> arry[100005];
bool visited[100005] = {0};

void dfs(int pos) {
	if (visited[pos] == 1) {
		return;
	}
	visited[pos] = 1;
	for (auto i: arry[pos]) {
		dfs(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	
	cin>>n>>m;
	int a, b;
	for (int i = 0; i<m; i++) {
		cin>>a>>b;
		arry[a].push_back(b);
		arry[b].push_back(a);
	}


	dfs(1);
	int lastloc = 1;
	int newloc = 1;
	vector<pair<int, int>> ans;
	int sum = 0;
	for (int i = 2; i<=n; i++) {
		if (visited[i] == false) {
			dfs(i);
			ans.push_back(make_pair(lastloc, i));
			sum++;
			lastloc = i;
		}
	}

	cout<<sum<<endl;
	for (auto i : ans) {
		cout<<i.first<<" "<<i.second<<endl;
	}
}

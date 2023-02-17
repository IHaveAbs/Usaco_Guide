#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int n, m;
vector<pair<int, int>> positions(100005);
vector<int> arry[100005];
bool visited[100005] = {0};
int smallestx = 0;
int greatestx = 0;
int smallesty = 0;
int greatesty = 0;
int minans = INT_MAX;

void dfs(int pos) {
    visited[pos] = 1;
    smallestx = min(smallestx, positions[pos].first);
    greatestx = max(greatestx, positions[pos].first);
    smallesty = min(smallesty, positions[pos].second);
    greatesty = max(greatesty, positions[pos].second);
    for (auto i: arry[pos]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);

    cin>>n>>m;

    for (int i = 1; i<=n; i++) {
        int a, b;
        cin>>a>>b;
        positions[i] = (make_pair(a, b));
    }

    for (int i =  0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        arry[a].push_back(b);
        arry[b].push_back(a);
    }

    for (int i = 1; i<=n; i++) {
        if (!visited[i]) {
            smallestx = positions[i].first;
            greatestx = positions[i].first;
            smallesty = positions[i].second;
            greatesty = positions[i].second;
            dfs(i);
        }
        minans = min(minans, ((greatestx-smallestx)+(greatesty-smallesty))*2);
    }
    cout<<minans<<endl;
}

#include <bits/stdc++.h>
using namespace std;


struct node{
    int x, y, r;
};

vector<int> adj[201];
vector<struct node> arry;
int tempcount = 0;
vector<bool>visited(201, 0);

void dfs(int pos) {
    visited[pos] = 1;
    tempcount++;
    for (auto i : adj[pos]) {
        if (visited[i] == false) {
            dfs(i);
        }
    }
}

int main() {
    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);

    int n;
    cin>>n;

    struct node temp;
    for (int i = 1; i<=n; i++) {
        cin>>temp.x>>temp.y>>temp.r;
        arry.push_back(temp);
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (j==i) {
                continue;
            }
            int dist = (arry[i].x-arry[j].x)*(arry[i].x-arry[j].x)+(arry[i].y-arry[j].y)*(arry[i].y-arry[j].y);
            if (arry[i].r*arry[i].r >= dist) {
                adj[i].push_back(j);
            }
            if (arry[j].r*arry[j].r >= dist) {
                adj[j].push_back(i);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i<n; i++) {
        tempcount = 0;
        dfs(i);
        ans = max(ans, tempcount);
        fill(visited.begin(), visited.end(), false);
    }
    cout<<ans<<endl;
}

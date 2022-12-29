#include <iostream>
#include <vector>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    
    vector<int> arry(n+1, 0);
    
    for (int i = 0; i<k; i++) {
        int a, b;
        cin>>a>>b;
        
        arry[a]++;
        if (b <=n) {
            arry[b+1]--;
        }
        
    }
    
    for (int i = 1; i<=n; i++) {
        arry[i] = arry[i] + arry[i-1];
    }
    
    sort(arry.begin(), arry.end());
    cout<<arry[(n-1)/2+1]<<"\n";
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}

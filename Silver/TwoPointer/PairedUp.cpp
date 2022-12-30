#include <iostream>
#include <vector>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    
    int n;
    cin>>n;
    
    vector<pair<int, int>> arry;
    
    for (int i = 0; i<n; i++) {
        pair<int, int> temp;
        cin>>temp.second>>temp.first;
        arry.pb(temp);
    }
    
    sort(arry.begin(), arry.end());
    
    int i = 0, j = arry.size()-1;
    int ans = 0;
    while (i<j) {
        ans = max(ans, arry[i].first+arry[j].first);
        if (arry[i].second > 0) {
            arry[i].second--;
        }
        else {
            i++;
        }
        if (arry[j].second>0) {
            arry[j].second--;
        }
        else {
            j--;
        }
    }
    
    cout<<ans<<endl;
}

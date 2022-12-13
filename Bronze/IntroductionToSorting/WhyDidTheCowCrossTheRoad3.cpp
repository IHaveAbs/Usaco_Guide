#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);

    int n;
    cin>>n;
    
    
    vector<pair<int, int>> arry;
    
    
    for (int i = 0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        
        pair<int, int> temp(a, b);
        
        arry.push_back(temp);
    }
    
    sort(arry.begin(), arry.end());
    
    int tpos = arry[0].first+arry[0].second;
    
    for (int i = 1; i<n; i++) {
        if (tpos < arry[i].first) {
            tpos = arry[i].first;
        }
        tpos+=arry[i].second;
    }
    
    cout<<tpos<<"\n";
    
}

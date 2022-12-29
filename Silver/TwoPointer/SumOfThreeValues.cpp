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
    

    int n, k;
    
    cin>>n>>k;
    
    
    vector<pair<int, int>> arry(n);
    
    
    for (int i = 0; i<n; i++) {
        cin>>arry[i].first;
        arry[i].second = i;
    }
    
    
    sort(arry.begin(), arry.end());
    
    for (int i = 0; i<n; i++) {
        int lookfor = k-arry[i].first;
        
        int a = 0, b = n-1;
        if (a == i) {
            a++;
        }
        if (b == i) {
            b--;
        }
        while (a<b) {
            
            if (arry[a].first+arry[b].first == lookfor) {
                cout<<arry[a].second+1<<" "<<arry[b].second+1<<" "<<arry[i].second+1<<endl;
                return 0;
            }
            
            else if (arry[a].first+arry[b].first < lookfor) {
                a++;
            }
            else {
                b--;
            }
            
            if (a == i) {
                a++;
            }
            if (b == i) {
                b--;
            }
            
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

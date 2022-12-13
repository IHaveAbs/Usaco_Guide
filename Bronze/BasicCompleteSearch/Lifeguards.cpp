#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int arry[1001] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    
    int n;
    
    cin>>n;
    
    vector<int> start(n);
    vector<int> end(n);


    for (int i = 0; i<n; i++) {
        cin>>start[i]>>end[i];
        
        for (int j = start[i]; j<end[i]; j++) {
            arry[j]++;
        }
    }
    
    int ans = 0;
    
    for (int i = 0; i<n; i++) {
        for (int j = start[i]; j<end[i]; j++) {
            arry[j]--;
        }
        
        
        int interval = 0;
        for (int j = 0; j<1000; j++) {
            if (arry[j] != 0) {
                interval++;
            }
        }
        
        for (int j = start[i]; j<end[i]; j++) {
            arry[j]++;
        }
        
        ans = max(ans, interval);
    }
    
    cout<<ans<<"\n";
}

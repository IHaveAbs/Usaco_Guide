#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
	  freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    
    int n, k;
    cin>>n>>k;
    
    vector<int> arry(n);
    
    
    for (int i = 0; i<n; i++) {
        cin>>arry[i];
    }
    
    sort(arry.begin(), arry.end());
    
    
    int ans = 0;
    for (int i = 0; i<n; i++) {
        int tempans = 1;
        for (int j = i+1; j<n; j++) {
            if (arry[j]-arry[i] <= k) {
                tempans++;
            }
            else {
                break;
            }
        }
        ans = max(tempans, ans);
    }
    
    cout<<ans<<"\n";
    
    
    
}

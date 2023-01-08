#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
#define int long long
 
signed main() {
    ios::sync_with_stdio(false);
	  cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    vector<int> arry(n, 0);
    arry[0] = 1;
    int temp;
    int sum = 0;
    
    for (int i = 0; i<n; i++) {
        cin>>temp;
        sum += temp;
        arry[(sum%n+n)%n]++;
    }
    
    int ans = 0;
    
    for (int i = 0; i<n; i++) {
        ans += (arry[i]*(arry[i]-1))/2;
    }
    
    cout<<ans<<endl;
    
    
}

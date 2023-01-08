#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin>>n>>k;
    
    unordered_map<int, int> key;
    int sum = 0;
    key.insert({0, 1});
    int temp;
    int ans = 0;
    
    for (int i = 0; i<n; i++) {
        cin>>temp;
        sum+=temp;
        
        if (key.find(sum-k) != key.end()) 
            ans += key.find(sum-k)->second;
        if (key.find(sum) == key.end()) 
            key.insert({sum, 1});
        else 
            key.find(sum)->second++;
    }
    cout<<ans<<endl;
}

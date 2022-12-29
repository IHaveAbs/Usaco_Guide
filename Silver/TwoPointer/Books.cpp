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
    
    vector<int> arry(n);
    
    
    for (int i = 0; i<n; i++) {
        cin>>arry[i];
    }
    
    int i = 0, j = 0;
    int count = 0;
    int ans = 0;
    int cursum = 0;
    while (j < n) {
        count++;
        cursum+=arry[j];
        
        while (cursum > k) {
            cursum -= arry[i];
            i++;
            count--;
        }
        
        ans = max(ans, count);
        
        j++;
        
    } 
    cout<<ans<<endl;
}

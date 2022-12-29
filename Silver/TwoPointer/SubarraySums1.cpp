#include <iostream>
#include <vector>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define mp make_pair
#define pb push_back


int main() {
    int n, k;
    cin>>n>>k;
    
    vector<int> arry;
    
    for (int i = 0; i<n; i++) {
        int temp;
        cin>>temp;
        arry.pb(temp);
    }
    
    int ans = 0;
    int i = 0, j = 0;
    int cursum = 0;
    while (j<n) {
        cursum+=arry[j];
        while (cursum > k) {
            cursum-=arry[i];
            i++;
        }
        
        if (cursum == k) {
            ans++;
        }
        j++;
    }
    
    cout<<ans<<endl;
}

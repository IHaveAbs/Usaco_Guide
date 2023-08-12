//
//  main.cpp
//  MAIN
//
//  Created by Situ Zhao on 8/11/23.
//

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<bitset>
#include<unordered_map>
#include<unordered_set>

#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
using namespace std;

int n, k;
vector<int> arry;

bool ischeck(int a) {
    ll sum = 0;
    for (int i = (n/2); i<arry.size(); i++) {
        sum+=max(0, a-arry[i]);
    }
    if (sum <= k) {
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin>>n>>k;
    
    int temp;
    for (int i = 0; i<n; i++) {
        cin>>temp;
        arry.pb(temp);
    }
    
    sort(arry.begin(), arry.end());
    
    int lo = 1, hi = INT_MAX;
    bool lastsign = false;
    int mid;
    int ans = 0;
    while (lo <= hi) {
        mid = lo + (hi-lo)/2;
        bool result = ischeck(mid);
        
        if (result == false) {
            hi = mid-1;
            lastsign = false;
        }
        else if (result == true) {
            ans = max(ans, mid);
            lo = mid+1;
            lastsign = true;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}

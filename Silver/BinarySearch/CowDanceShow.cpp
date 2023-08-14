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
#include<climits>

#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define endl "\n"
using namespace std;

int n, t;
vector<int> arry;

bool check(int k) {
    int timesum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i<k; i++) {
        pq.push(arry[i]);
    }

    for (int i = k; i<n; i++) {
        auto temp = pq.top();
        pq.pop();
        pq.push(temp+arry[i]);
    }
    
    while (pq.size() != 0) {
        
        timesum=max(timesum, pq.top());
        pq.pop();
    }
    if (timesum <= t) {
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    freopen("cowdance.in", "r", stdin);
    freopen("cowdance.out", "w", stdout);

    cin>>n>>t;
    
    int temp;
    for (int i = 1; i<=n; i++) {
        cin>>temp;
        arry.push_back(temp);
    }
    
    int ans = INT_MAX;
    int lo = 1, hi = n;
    while (lo<=hi) {
        int mid = lo+(hi-lo)/2;
        
        bool result = check(mid);
        
        if (result) {
            ans = min(ans, mid);
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}

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
#define endl "\n"
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    
    int n, q;
    cin>>n>>q;
    
    vector<int> arry(n);
    for (int i = 0; i<n; i++) {
        cin>>arry[i];
    }
    sort(arry.begin(), arry.end());
    
    int a, b;
    for (int i = 0; i<q; i++) {
        cin>>a>>b;
        auto aplace = lower_bound(arry.begin(), arry.end(), a);
        auto bplace = upper_bound(arry.begin(), arry.end(), b);
        cout<<bplace-aplace<<endl;
    }
    
    return 0;
}

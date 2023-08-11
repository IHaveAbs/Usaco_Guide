//
//  main.cpp
//  MAIN
//
//  Created by Situ Zhao on 8/10/23.
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

ll arr[500001] = {0};

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n, q;
    cin>>n>>q;
    
    for (int i = 1; i<=n; i++) {
        cin>>arr[i];
        arr[i] = arr[i]+arr[i-1];
    }
    
    int a, b;
    for (int i = 1; i<=q; i++) {
        cin>>a>>b;
        cout<<arr[b]-arr[a]<<endl;
    }
    
    return 0;
}

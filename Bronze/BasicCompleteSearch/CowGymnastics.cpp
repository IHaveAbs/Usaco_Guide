#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
	cin.tie(nullptr);

	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	
    int grid[21][21] = {0};
    int k, n;
    
    cin>>k>>n;
    
    vector<vector<int>> arry;
    
    for (int i = 0; i<k; i++) {
        vector<int> temp;
        for (int j = 0; j<n; j++) {
            int a;
            cin>>a;
            temp.push_back(a);
        }
        arry.push_back(temp);
    }
    
    for (int i = 0; i<k; i++) {
        for (int j= 0; j<n; j++) {
            for (int x = j+1; x<n; x++) {
                grid[arry[i][j]][arry[i][x]]++;
            }
        }
    }
    
    int ans = 0;
    for (int i = 1; i<=20; i++) {
        for (int j = 1; j<=20; j++) {
            if (grid[i][j] == k) {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

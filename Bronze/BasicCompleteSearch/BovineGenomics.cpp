/*Usaco Bovine Genomics*/
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	
    int n, m;
    cin>>n>>m;
    
    int ans = 0;
    vector<string> genomics;
    
    for (int i = 1; i<=2*n; i++) {
        string temp;
        cin>>temp;
        genomics.push_back(temp);
    }
    
    for (int i = 0; i<m; i++) {
        bool isadd = true;
        int arry[27] = {0};
        for (int j = 1; j<=n; j++) {
            arry[genomics[j-1][i]-'A']++;
        }
        for (int j = n+1; j<=2*n; j++) {
            if (arry[genomics[j-1][i]-'A'] != 0) {
                isadd = false;
                break;
            }
        }
        if (isadd == true) {
            ans+=1;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}


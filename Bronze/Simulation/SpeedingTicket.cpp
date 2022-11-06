#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("speeding.in");
    ofstream fout("speeding.out");
    
    int road[101];
    int n, m, ans = 0;
    fin>>n>>m;
    
    int poi = 1;
    for (int i = 1; i<=n; i++) {
        int len, speed;
        fin>>len>>speed;
        for (int j = 1; j<=len; j++) {
            road[poi] = speed;
            poi++;
        }
        
    }
    
    int poi2 = 1;
    for (int i = 1; i<=m; i++) {
        int len, speed;
        fin>>len>>speed;
        
        
        for (int j =0 ; j<len; j++) {
            ans = max(ans, speed-road[poi2]);
            poi2++;
            
        }
        
    }
    fout<<ans<<endl;
    return 0;
}

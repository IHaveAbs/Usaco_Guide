#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("pails.in");
    ofstream fout("pails.out");
    
    int x, y, m;
    
    fin>>x>>y>>m;
    
    int ans = 0;
    for (int i = 0; i<m; i++) {
        if (i*x > m) {
            break;
        }
        
        int leftover = m-i*x;
        while (leftover >= y) {
            leftover-=y;
        }
        ans = max(ans, m-leftover);
    }
    
    fout<<ans<<endl;
    return 0;
}

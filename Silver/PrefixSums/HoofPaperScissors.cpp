#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

struct a {
    int pcount;
    int hcount;
    int scount;
};


int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    
    int n;
    cin>>n;
    
    
    vector<struct a> arry(n+1);
    
    
    struct a temp;
    temp.pcount = 0;
    temp.hcount = 0;
    temp.scount = 0;
    arry[0] = temp;
    for (int i = 1; i<=n; i++) {
        char charr;
        cin>>charr;
        
        if (charr == 'P') {
            temp.pcount++;
        }
        else if (charr == 'H') {
            temp.hcount++;
        }
        else if (charr == 'S') {
            temp.scount++;
        }
        arry[i] = temp;
    }
    
    int ans = 1;
    for (int i = 1; i<=n; i++) {
        int tempcount = 0;
        
        int maxadd = max(arry[i].pcount, max(arry[i].scount, arry[i].hcount));
        tempcount+=maxadd;
        
        maxadd = arry[n].pcount - arry[i].pcount;
        maxadd = max(maxadd, arry[n].scount - arry[i].scount);
        maxadd = max(maxadd, arry[n].hcount - arry[i].hcount);
        
        tempcount+=maxadd;
        ans = max(ans, tempcount);
    }
    
    cout<<ans<<endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    
    vector<int> arry(3);
    
    for (int i = 0; i<3; i++) {
        cin>>arry[i];
    }
    
    sort(arry.begin(), arry.end());
    
    if (arry[2]-arry[1] == 1 && arry[1] - arry[0] == 1) {
        cout<<0<<"\n";
    }
    else if (arry[2]-arry[1] == 2 || arry[1] - arry[0] == 2) {
        cout<<1<<"\n";
    }
    else {
        cout<<2<<"\n";
    }
    
    
    
    cout<<max(arry[2]-arry[1]-1, arry[1]-arry[0]-1)<<"\n";
    
    return 0;
    
}

/*silver*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    
    
    int n, k, b;
    cin>>n>>k>>b;
    
    vector<int> arry(n+1, 1);
    arry[0] = 0;
    
    for (int i = 1; i<=b; i++) {
        int temp;
        cin>>temp;
        arry[temp] = 0;
    }
    
    for (int i = 1; i<=n; i++) {
        arry[i] = arry[i]+arry[i-1];
    }

    
    
    int maxa = 0;
    for (int i = 1; i+k-1<=n; i++) {
        int segment = arry[i+k-1]-arry[i-1];
        //cout<<segment<<" "<<arry[i+k-1]<<" "<<arry[i]<<endl;
        maxa = max(maxa, segment);
        
    }
    
    //cout<<maxa<<endl;
    cout<<(k-maxa)<<endl;
    
    
    
    
    

    return 0;
}

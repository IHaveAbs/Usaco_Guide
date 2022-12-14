#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int maxx=0;
        int maxy=0;
        for(int j=0;j<n;j++){
            //cout<<i<<" "<<j<<endl;
            if(v[j].second==v[i].second){
                maxx=max(maxx,abs(v[j].first-v[i].first));
            }
            if(v[j].first==v[i].first){
                maxy=max(maxy,abs(v[j].second-v[i].second));
            }
        }
        //cout<<maxx<<" "<<maxy<<endl;
        ans=max(ans,maxx*maxy);
    }
    cout<<ans<<"\n";
    
    
    
}

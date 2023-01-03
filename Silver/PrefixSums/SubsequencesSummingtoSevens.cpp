#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
	
    int n;
    cin>>n;
    
    vector<int> arry(7, -1);
    int ans = 0;
    int last = 0;
    int temp;
    
    for (int i = 1; i<=n; i++) {
        cin>>temp;
        last = last + temp;
        last %= 7;
        if (arry[last] == -1) {
            arry[last] = i;
        }
        else {
            ans = max(ans, i-arry[last]);
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

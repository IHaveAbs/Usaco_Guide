#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    
    int n;
    cin>>n;
    
    vector<int> arry(n+1);

    for(int i=0;i<n;i++) {
	cin>>arry[i];
    }
	
    int ans = n-1;
    for(int i=n-2;i>=0;i--) {
	if(arry[i] < arry[i+1]) {
	     ans = i;
	}
	else {
	     break;
	}
     }
	
     cout << ans << endl;
     return 0;
    
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin>>n;
	
	
	vector<int> arry(n+1);
	for (int i = 1; i<=n; i++) {
	    cin>>arry[i];
	}
	
	int ans = 0;
	for (int i = 1; i<=n; i++) {
	    int sum = 0;
	    for (int j = i; j<=n; j++) {
	        sum += arry[j];
	        int average = sum/(j-i+1);
	        for (int x = i; x<=(j); x++) {
	            if (sum == arry[x]*(j-i+1)) {
	                ans++;
	                break;
	            }
	        }
	    }
	}
	
	cout<<ans<<endl;
	
    
    
    
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int> arry(n);
	
	for (int i = 0; i<n; i++) {
		cin>>arry[i];
	}
	
	sort(arry.begin(), arry.end());
	
	int ans = 1;
	for (int i = 1; i<n-1; i++) {
		if (arry[i] != arry[i+1]) {
			ans++;
		}
	}
	if (arry[n-2] != arry[n-1]) {
	    ans++;
	}
	cout<<ans<<endl;
	return 0;
}

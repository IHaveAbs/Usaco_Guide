#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

void solve() {
	int n;
	cin>>n;

	vector<int> arry(n+1);
	for (int i = 1; i<=n; i++) {
		char temp;
		cin>>temp;
		arry[i] = (temp-'0')-1;
	}

	unordered_map<int, int> key;
	key[0] = 1;
	int sum = 0;
	int ans = 0;
	for (int i = 1; i<=n; i++) {
		sum+=arry[i];
		ans += key[sum];
		key[sum]++;
	}

	cout<<ans<<endl;
 }

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;

	while (t--) {
		solve();
	}

}

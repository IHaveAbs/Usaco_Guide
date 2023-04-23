#include <bits/stdc++.h>
using namespace std;

vector<string> cows{"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};

int n;
vector<pair<string, string>> arry;

bool check() {
	for (int i = 0; i<arry.size(); i++) {
		bool works2 = false;
		for (int j = 0; j<cows.size(); j++) {
			if (cows[j] == arry[i].second) {
				if (j-1 >= 0 && cows[j-1] == arry[i].first) {
					works2 = true;
					break;
				}
				if (j+1 < cows.size() && cows[j+1] == arry[i].first) {
					works2 = true;
					break;
				}
			}
		}

		if (works2 == false) {
			return false;
		}
	}

	return true;
}

int main() {

	freopen("lineup.in", "r", stdin);
	freopen("lineup.out", "w", stdout);

	cin>>n;
	
	for (int i = 0; i<n; i++) {
		string a, b;
		cin>>a;

		cin>>b;
		cin>>b;
		cin>>b;
		cin>>b;
		cin>>b;

		arry.push_back({a, b});
	}


	sort(cows.begin(), cows.end());

	do {
		if (check() == true) {
			for (auto i: cows) {
				cout<<i<<endl;
			}
			return 0;
		}
	}
	while (next_permutation(cows.begin(), cows.end()));
	

	return 0;



}

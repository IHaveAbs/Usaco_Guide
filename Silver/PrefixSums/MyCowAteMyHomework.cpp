#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    freopen("homework.in", "r", stdin);
    freopen("homework.out", "w", stdout);
    
    int n;
    cin>>n;
    
    vector<int> arry(n);
    
    for (int i = 0; i<n; i++) {
        cin>>arry[i];
    }
    

    int sum = arry[n-1];
    
    int count = 1;
    int minans = arry[n-1];
    float temp = 0;
    vector<int> ans;
    
    for (int i = n-2; i>=1; i--) {
        sum+=arry[i];
        count++;
        minans = min(minans, arry[i]);
        float average = (float)(sum-minans)/(float)(count-1);

        if (average > temp) {
            temp = average;
            ans.clear();
            ans.push_back(i);
        }
        else if (average == temp) {
            ans.push_back(i);
        }
            
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }

    
    return 0;
}

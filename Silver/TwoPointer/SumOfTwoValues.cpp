#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    
    cin>>n>>x;
    vector<pair<int, int>> arry;
    
    
    for (int i = 0; i<n; i++) {
        pair<int, int> temp;
        cin>>temp.first;
        temp.second = i;
        arry.push_back(temp);
    }
    
    sort(arry.begin(), arry.end());
    
    /*
    for (int i = 0; i<n; i++) {
        cout<<arry[i].first<<" ";
    }
    cout<<endl;
    */
    
    int i = 0, j = n-1;
    
    while (i<j) {
        //cout<<i<<" "<<arry[i].first<<endl;
        //cout<<j<<" "<<arry[j].first<<endl;
        if (arry[i].first+arry[j].first == x) {
            cout<<arry[i].second+1<<" "<<arry[j].second+1<<endl;
            return 0;
        }
        else if (arry[i].first+arry[j].first<x) {
            i++;
        }
        else {
            j--;
        }
        
    }
    cout<<"IMPOSSIBLE"<<endl;
    
}

#include <iostream>
#include <unordered_set>
using namespace std;


int main() {
    unordered_set<int> arry;
    
    int n;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        int temp;
        cin>>temp;
        arry.insert(temp);
    }
    
    cout<<arry.size()<<endl;
    
    return 0;
    
}

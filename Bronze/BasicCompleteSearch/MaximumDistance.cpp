#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point {
    int x, y;
};

int main() {
    int n;
    cin>>n;
    
    vector<struct point> arry;
    
    for (int i = 0; i<n; i++) {
        struct point temp;
        cin>>temp.x;
        arry.push_back(temp);
    }
    for (int i = 0; i<n; i++) {
        cin>>arry[i].y;
    }
    
    int maxans = 0; 
    
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            int templen = pow(abs(arry[i].x-arry[j].x), 2)+pow(abs(arry[i].y-arry[j].y), 2);
            maxans = max(maxans, templen);
        }
    }
    
    cout<<maxans<<endl;
    return 0;
}

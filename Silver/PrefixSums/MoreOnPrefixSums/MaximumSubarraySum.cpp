#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

long long arry[200001];

int main()
{
    int n;
    cin>>n;
    
    long long temp;
    cin>>temp;
    arry[1] = temp;
    arry[0] = 0;
    
    for (int i = 2; i<=n; i++) {
        cin>>temp;
        arry[i] = arry[i-1]+temp;
    }
    
    long long maxa = arry[1];
    long long mina = arry[0];
    for (int i = 1; i<=n; i++) {
        maxa = max(maxa, arry[i]-mina);
        mina = min(mina, arry[i]);
    }
    
    
    cout<<maxa<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int arry[500001];

int main()
{
    int n, q;
    cin>>n>>q;
    
    
    int temp;
    cin>>temp;
    arry[0] = temp;
    for (int i = 1; i<n; i++) {
        cin>>temp;
        arry[i] = temp+arry[i-1];
    }
    
    for (int i = 0; i<q; i++) {
        int l, r;
        cin>>l>>r;
        
        cout<<arry[r-1]-arry[l-1]<<endl;
    }

    return 0;
}

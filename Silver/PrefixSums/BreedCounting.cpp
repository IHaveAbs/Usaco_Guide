#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

long long arry[100001][4]; //1 is holsteins, 2 is Guernseys, 3 is Jersey

int main()
{
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");
    
    int n, q;
    fin>>n>>q;
    
    int temp;
    fin>>temp;
    arry[1][temp]++;
    
    for (int i = 2; i<=n; i++) {
        
        fin>>temp;
        arry[i][1] = arry[i-1][1];
        arry[i][2] = arry[i-1][2];
        arry[i][3] = arry[i-1][3];
        arry[i][temp] = arry[i-1][temp]+1;
    }
    
    

    
    for (int i = 1; i<=q; i++) {
        int a, b;
        
        fin>>a>>b;
        
        fout<<arry[b][1]-arry[a-1][1]<<" ";
        fout<<arry[b][2] - arry[a-1][2]<<" ";
        fout<<arry[b][3] - arry[a-1][3]<<endl;
    }
    
    return 0;
}

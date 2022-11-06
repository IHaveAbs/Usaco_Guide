#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");
    
    int m, n, k;
    
    fin>>m>>n>>k;
    
    
    
    for (int i = 0; i<m; i++) {
        string line = "";
        for (int j = 0; j<n; j++) {
            char temp;
            fin>>temp;
            
            for (int x = 1; x<=k ;x++) {
                line+=temp;
            }
            
        }
        for (int y = 1; y<=k; y++) {
            fout<<line<<endl;
        }
    }
    
    return 0;
}

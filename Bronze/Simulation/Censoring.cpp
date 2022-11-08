/*
Nov 8 2022
USACO BRONZE CENSORING
only 14/15 cases pass, one of them goes over time limit. ;(
Will look at later


*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("censor.in");
    ofstream fout("censor.out");
    
    string s, m;
    fin>>s>>m;
    
    long long len = m.length();
    
    long long i = 0; 
    
    while (i+2<s.length()) {
        string temp = s.substr(i, len);
        if (temp == m) {
            s.erase(i, len);
            i-=(len);
            if (i<0) {
                i=-1;
            }
        }
        i++;
    }
    
    fout<<s<<endl;
    return 0;
}

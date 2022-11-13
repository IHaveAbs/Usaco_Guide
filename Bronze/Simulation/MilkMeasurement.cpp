#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

struct swap{
    int day;
    string name;
    int output;
};
bool isif(struct swap a, struct swap b) {
    return a.day<b.day;
}

int main() {
    ifstream fin("measurement.in");
    ofstream fout("measurement.out");
    
    
    int n;
    fin>>n;
    
    int ans = 0;
    int b = 7, e = 7, m = 7;
    string tops = "";
    
    vector<struct swap> swaps;
    for (int i = 0; i<n; i++) {
        struct swap temp;
        fin>>temp.day>>temp.name>>temp.output;
        swaps.push_back(temp);
    }
    
    sort(swaps.begin(), swaps.end(), isif);
    
    for (auto i: swaps) {
        if (i.name == "Bessie") {
            b+=i.output;
        }
        else if (i.name == "Elsie") {
            e+=i.output;
        }
        else {
            m+=i.output;
        }
        
        int maxpos = max(b, max(e, m));
        string newtops = "";
        
        if (b == maxpos) {
            newtops+='b';
        }
        if (e == maxpos) {
            newtops+='e';
        }
        if (m == maxpos) {
            newtops+='m';
        }
        
        if (newtops != tops) {
            ans++;
        }
        tops = newtops;
        
        
    }
    fout<<ans<<endl;
    
    return 0;
}

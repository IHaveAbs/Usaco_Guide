#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct swap{
    int a;
    int b;
    int g;
};

int main()
{
    ifstream fin("shell.in");
    ofstream fout("shell.out");
    
    int n; vector<struct swap> swapsmade; int ans = 0;

    fin>>n;

    struct swap temp;
    for (int i = 0; i<n; i++) {
        fin>>temp.a>>temp.b>>temp.g;
        swapsmade.push_back(temp);
    }

    for (int j = 1; j<=3; j++) {
        int pebblepos = j;
        int tempans = 0;
        for (int i = 0; i<n; i++) {
            int aval = swapsmade[i].a;
            int bval = swapsmade[i].b;
            int guess = swapsmade[i].g;

            if (aval == pebblepos) {
                pebblepos = bval;
            }
            else if(bval == pebblepos) {
                pebblepos = aval;
            }
            

            if (guess == pebblepos) {
                tempans++;
            }
        }
        
        ans = max(ans, tempans);
    }

    fout<<ans<<endl;


    return 0;
}

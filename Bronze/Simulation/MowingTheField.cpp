#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("mowing.in");
    ofstream fout("mowing.out");
    
    int arry[1001][1001];

    int ans = -1;
    int n;
    fin>>n;
    
    int t = 0;
    int posx = 500;
    int posy = 500;
    arry[posx][posy] = t;
    
    for (int i = 0; i<n; i++) {
        char direction;
        int len;
        fin>>direction>>len;
        
        if (direction == 'N') {
            
            for (int j = 0; j<len; j++) {
                t++;
                posy++;
                if (arry[posx][posy] != NULL) {
                    if (ans == -1) {
                        ans = (t-arry[posx][posy]);
                    }
                    else {
                        ans = min(ans, t-arry[posx][posy]);
                    }
                }
                arry[posx][posy] = t;
            }
        }
        else if (direction == 'W') {
            for (int j = 0; j<len; j++) {
                t++;
                posx--;
                if (arry[posx][posy] != NULL) {
                    if (ans == -1) {
                        ans = (t-arry[posx][posy]);
                    }
                    else {
                        ans = min(ans, t-arry[posx][posy]);
                    }
                }
                arry[posx][posy] = t;
            }
        }
        else if (direction == 'S') {
            for (int j = 0; j<len; j++) {
                t++;
                posy--;
                if (arry[posx][posy] != NULL) {
                    if (ans == -1) {
                        ans = (t-arry[posx][posy]);
                    }
                    else {
                        ans = min(ans, t-arry[posx][posy]);
                    }
                }
                arry[posx][posy] = t;
            }
        }
        else { //E
            for (int j = 0; j<len; j++) {
                t++;
                posx++;
                if (arry[posx][posy] != NULL) {
                    if (ans == -1) {
                        ans = (t-arry[posx][posy]);
                    }
                    else {
                        ans = min(ans, t-arry[posx][posy]);
                    }
                }
                arry[posx][posy] = t;
            }
        }
    }
    
    fout<<ans<<endl;
    
    return 0;
}

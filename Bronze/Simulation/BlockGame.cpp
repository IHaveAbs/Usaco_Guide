/*block game 
bronze
nov 7, 22
*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("blocks.in");
    ofstream fout("blocks.out");
    
    int alpha[26] = {0};
    int n;
    
    fin>>n;
    
    vector<vector<string>> cards;
    for (int i = 0; i<n; i++) {
        int arry1[26] = {0};
        int arry2[26] = {0};
        
        vector<string> card;
        string front, back;
        fin>>front>>back;

        for (int x = 0; x<front.length(); x++) {
            arry1[front[x]-'a']++;
        }
        
        for (int x = 0; x<back.length(); x++) {
            arry2[back[x]-'a']++;
        }
        
        for (int x = 0; x<26; x++) {
            alpha[x] += max(arry1[x], arry2[x]);
        }
        
        
    }
    
    
    for (int i = 0; i<26; i++) {
        fout<<alpha[i]<<endl;
    }

    return 0;
}

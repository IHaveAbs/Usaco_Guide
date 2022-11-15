#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("square.in");
    ofstream fout("square.out");
    
    vector<int> board1(4, 0);
    vector<int> board2(4, 0);
    
    fin>>board1[0]>>board1[1]>>board1[2]>>board1[3];
    fin>>board2[0]>>board2[1]>>board2[2]>>board2[3];
    
    int maxX, maxY, minX, minY;
    maxX = max(board1[2], board2[2]);
    maxY = max(board1[3], board2[3]);
    
    minX = min(board1[0], board2[0]);
    minY = min(board1[1], board2[1]);

    fout<<(max(maxY-minY, maxX-minX))*(max(maxY-minY, maxX-minX))<<endl;
    
    return 0;
}

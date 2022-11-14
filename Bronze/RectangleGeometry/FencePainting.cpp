#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("paint.in");
    ofstream fout("paint.out");
    
    int a, b, c, d;
    
    fin>>a>>b;
    
    fin>>c>>d;
    
    int segment1 = b-a;
    int segment2 = d-c;
    int intersection = max(min(b, d) - max(a, c), 0);
    
    fout<<segment1+segment2-intersection<<endl;
    return 0;
}

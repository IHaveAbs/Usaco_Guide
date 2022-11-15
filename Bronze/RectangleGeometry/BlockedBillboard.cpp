#include <iostream>
#include <vector> 
#include <fstream>
using namespace std;

int inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	return (
		max((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) , 0)
		* max((min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y)),0)
	);
}

long long area(vector<int> temp) {
	long long length = temp[3] - temp[1];
	long long width = temp[2] - temp[0];
	return length * width;
}

int main() {
    ifstream fin("billboard.in");
    ofstream fout("billboard.out");
    
    vector<int> board1(4, 0);
    vector<int> board2(4, 0);
    vector<int> truck(4, 0);
    
    fin>>board1[0]>>board1[1]>>board1[2]>>board1[3];
    fin>>board2[0]>>board2[1]>>board2[2]>>board2[3];
    fin>>truck[0]>>truck[1]>>truck[2]>>truck[3];
    
    int area1 = area(board1);
    int area2 = area(board2);
    int intersect1 = inter_area(board1, truck);
    int intersect2 = inter_area(board2, truck);


    fout<<area1+area2-intersect1-intersect2<<endl;
    
    
    return 0;
}

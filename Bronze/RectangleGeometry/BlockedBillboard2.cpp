#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    int area() {
	    return (x2-x1) * (y2-y1);
    }
};

bool covered_corner(int x, int y, struct Rect temp) {
    if (x>= temp.x1 && x<= temp.x2 && y>=temp.y1 && y<=temp.y2) {
        return true;
    }
    else {
        return false;
    }
}

int intersect(struct Rect a, struct Rect b) {
	int inter_len = max(min(a.x2, b.x2) - max(a.x1, b.x1), 0);
	int inter_height = max(min(a.y2, b.y2) - max(a.y1, b.y1), 0);
	return inter_len * inter_height;
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	
    struct Rect lawnmower;
    struct Rect cowfeed;
    
    cin>>lawnmower.x1>>lawnmower.y1>>lawnmower.x2>>lawnmower.y2;
    cin>>cowfeed.x1>>cowfeed.y1>>cowfeed.x2>>cowfeed.y2;
    
    int cornercount = 0;
    
    cornercount+=covered_corner(lawnmower.x1, lawnmower.y1, cowfeed);
    cornercount+=covered_corner(lawnmower.x1, lawnmower.y2, cowfeed);
    cornercount+=covered_corner(lawnmower.x2, lawnmower.y2, cowfeed);
    cornercount+=covered_corner(lawnmower.x2, lawnmower.y1, cowfeed);
    
    if (cornercount == 0) {
        cout<<lawnmower.area()<<endl;
    }
    else if (cornercount == 1) {
        cout<<lawnmower.area()<<endl;
    }
    else if (cornercount == 2) {
        cout<<lawnmower.area()-intersect(lawnmower, cowfeed)<<endl;
    }
    else if (cornercount == 4) {  //3 corners are not possible
        cout<<0<<endl;
    }
    
    return 0;
}

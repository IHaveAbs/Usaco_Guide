#include <iostream>
using namespace std;

struct Rect {
    long long x1, y1, x2, y2;
    long long area() {
	    return (x2-x1) * (y2-y1);
    }
};

long long area_intersect(struct Rect a, struct Rect b) {
	long long inter_len = max(min(a.x2, b.x2) - max(a.x1, b.x1), (long long)0);
	long long inter_height = max(min(a.y2, b.y2) - max(a.y1, b.y1), (long long)0);
	return inter_len * inter_height;
}

bool intersect(struct Rect a, struct Rect b) {
	if (a.x1 >= b.x2 || a.x2 <= b.x1 
			|| a.y1 >= b.y2 || a.y2 <= b.y1) {
		return false;
	} else {
		return true;
	}
}
int main() {
    string debounce = "";
    struct Rect white;
    struct Rect black1;
    struct Rect black2;
    
    cin>>white.x1>>white.y1>>white.x2>>white.y2;
    cin>>black1.x1>>black1.y1>>black1.x2>>black1.y2;
    cin>>black2.x1>>black2.y1>>black2.x2>>black2.y2;
    
    if (intersect(black1, black2)) {      // if both black squares intersect
        struct Rect black_inter;
        black_inter.x2 = min(black1.x2, black2.x2);
        black_inter.x1 = max(black1.x1, black2.x1);
        black_inter.y2 = min(black1.y2, black2.y2);
        black_inter.y1 = max(black1.y1, black2.y1);
	    
        if ((white.area()-area_intersect(white, black1) - area_intersect(white, black2)+ area_intersect(black_inter, white)) > 0) {
            cout<<"YES"<<endl;
            return 0;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    else {
        if ((white.area()-area_intersect(white, black1) - area_intersect(white, black2)) > 0) {
            cout<<"YES"<<endl;
            return 0;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    return 0;
}

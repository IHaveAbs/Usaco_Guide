/*
Mixing Milk BRONZE
10/1/22 
*/

#include <iostream>
#include <fstream>
using namespace std;

struct bucket {
    int capacity;
    int milk;
};


int main() {
    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");
    
    
    
    struct bucket bucket1;
    struct bucket bucket2;
    struct bucket bucket3;
    
    fin>>bucket1.capacity>>bucket1.milk;
    fin>>bucket2.capacity>>bucket2.milk;
    fin>>bucket3.capacity>>bucket3.milk;
    
    for (int i = 1; i<=33; i++) {
        bucket2.milk = bucket2.milk + bucket1.milk;
        bucket1.milk = max(0, bucket2.milk - bucket2.capacity);
        bucket2.milk = min(bucket2.capacity, bucket2.milk);
        
        bucket3.milk = bucket3.milk + bucket2.milk;
        bucket2.milk = max(0, bucket3.milk - bucket3.capacity);
        bucket3.milk = min(bucket3.capacity, bucket3.milk);
        
        bucket1.milk = bucket1.milk + bucket3.milk;
        bucket3.milk = max(0, bucket1.milk - bucket1.capacity);
        bucket1.milk = min(bucket1.capacity, bucket1.milk);
    }
    
    bucket2.milk = bucket2.milk + bucket1.milk;
    bucket1.milk = max(0, bucket2.milk - bucket2.capacity);
    bucket2.milk = min(bucket2.capacity, bucket2.milk);
    
    fout<<bucket1.milk<<endl;
    fout<<bucket2.milk<<endl;
    fout<<bucket3.milk<<endl;
    
    return 0;
}

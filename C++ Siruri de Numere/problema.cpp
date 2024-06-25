#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int main(){
    int x, y, z, l = 0, lmax = 0;
    f >> x >> y;
    while(f >> z){
        if(x != y && y != z && z != x) l++;
            else l = 0;
        if(l > lmax) 
            lmax = l;
        x = y;
        y = z;
    }
    cout << lmax + 2;
}
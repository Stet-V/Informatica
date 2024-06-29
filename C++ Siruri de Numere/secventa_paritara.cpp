#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int main(){
    int x, y, l, lmax, lnr;
    f >> x;
    while(f >> y){
        if(x % 2 != y % 2)
            l = 0;
        l++;
        if(l > lmax){
            lmax = l;
            lnr = 0;
        }
        if(l == lmax)
            lnr++;
        x = y;
    }
    cout << lnr << " " << lmax;
}

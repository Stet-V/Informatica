#include <iostream>

using namespace std;

void NrImp(long int x, long int y, int &nr){
    for (int i = x; i <= y; i++){
        int a = 0;
        for (int j = 1; j <= i; j += 2) 
            if (i % j == 0) a++;
        if (a == 3) nr++;
    }
}

int main(){
    int x, y, nr = 0;
    cin >> x >> y;
    NrImp(x, y, nr);
    cout << nr;
}
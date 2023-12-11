#include <iostream>

using namespace std;

void frate(int x, int &y){
    int z = 1;
    while (x != 0){
        if (x % 10 == 9){
            y = -1;
            break;
        }
        y = y + (x % 10 + 1) * z;
        z = z * 10;
        x = x / 10;
    }
}

int main(){
    int x, y;
    cin >> x;
    frate(x, y);
    cout << y;
}

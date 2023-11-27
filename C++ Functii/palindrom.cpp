#include <iostream>

using namespace std;

void sub(int &a, int &b){
    b = b * 10 + a % 10;
    a = a / 10;
}

int main(){
    int n, x, y;
    cin >> n;
    x = n;
    y = 0;
    while (x != 0) sub(x, y);
    if (y == n) cout << "DA";
        else cout << "NU";
}
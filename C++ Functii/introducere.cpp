#include <iostream>

using namespace std;

void suma(int a, int b, int &s){

    s = a + b;
    
    cout << s;

}

int main(){

    int x, y, z;

    cin >> x >> y;

    suma(x, y, z);

    // cout << z;

}

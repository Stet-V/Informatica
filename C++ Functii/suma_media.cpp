#include <iostream>2
#include <fstream>

using namespace std;

void suma(int a, int b, int &s){

    s = a + b;
    cout << s;

}

int main(){

    int x, y, z;

    cin >> x >> y;

    suma(x, y, z);

    cout << "\n" << z/2.0;

}

#include <iostream>

using namespace std;

int sumaDC(int a, int b) {
    int x, s = 0;
    if (a > b) x = b;
        else x = a;
    for (int i = 1; i <= x; i++) {
        if (a % i == 0 && b % i == 0) {
            s = s + i;
        }
    }
    return s;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << sumaDC(x, y);
}
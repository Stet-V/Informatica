#include <iostream>

using namespace std;

int S1(int a){
    int x = 0;
    while (a != 0){
        x++;
        a = a / 10;
    }
    return x;
}

int S2(int n, int k){
    int x = 0;
    int y = 1;
    while (n != 0) {
        if (n % 10 == k) {
            x = x + n % 10 * y;
            y = y * 10;
        }
        x = x + n % 10 * y;
        y = y * 10;
        n = n / 10;
    }
    n = x;
    return n;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    cout << 2 * S1(n) - S1(S2(S2(n, a), b));
}
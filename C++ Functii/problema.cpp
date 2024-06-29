#include <iostream>

using namespace std;

void schimb(int &n, int x, int p){
    int t = 1;
    while(p > 0){
        t *= 10;
        p--;
    }
    n = (n / (t * 10) * 10 + x) * t + n % t;
}

int main(){
    int n = 12587, x = 6, p = 3;
    schimb(n, x, p);
    cout << n;
}

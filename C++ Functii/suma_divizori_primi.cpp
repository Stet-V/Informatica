#include <iostream>

using namespace std;

void divPrim(int n, int &s){
    int x, y = 2;
    while (n != 1){
        x = 0;
        while (n % y == 0){
            n = n / y;
            x++;
        }
        if (x % 2 == 1) s = s + y;
        y++;
    }
}

int main(){
    int n, s = 0;
    cin >> n;
    divPrim(n, s);
    cout << s;
}

#include <iostream>

using namespace std;

void nrdiv(int n, int &m){
    int y = 0;
    for (int i = 2; i <= n; i++){
        int x = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0) x++;
        if (x >= y){
            y = x;
            m = i;
        }
        
    }
}

int main(){
    int n, m;
    cin >> n;
    nrdiv(n, m);
    cout << m;
}

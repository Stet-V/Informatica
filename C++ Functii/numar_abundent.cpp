#include <iostream>

using namespace std;

int abundent(int n){
    float x = 0, y;
    for (int i = 1; i <= n; i++) if (n % i == 0) x = x + i;
    for (int i = 1; i <= n - 1; i++){
        y = 0;
        for (int j = 1; j <= i; j++) if (i % j == 0){
            y = y + j;
            if (y / i >= x / n) return 0;
        }
    }
    return 1;
}

int main(){   
    int n;
    cin >> n;
    cout << abundent(n);
}

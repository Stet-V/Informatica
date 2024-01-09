#include <iostream>

using namespace std;

int factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n-1);
}
    
int main(){
    int x, y;
    cin >> x >> y;
    cout << factorial(x) + factorial(y);
}
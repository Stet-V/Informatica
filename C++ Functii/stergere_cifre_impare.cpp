#include <iostream>
 
using namespace std;
 
int p(int n, int c){
    int a = 0;
    int b = 1;
    while (n != 0){
        if (n % 10 != c){
            a = a + n % 10 * b;
            b = b * 10;
        }
        n = n / 10;
    }
    return a;
}
 
int main(){
    int A[50], n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++){
        cin >> A[i];
        for (j = 1; j <= 9; j += 2) A[i] = p(A[i], j);
    }
    for (i = 1; i <= n; i++) cout << A[i] << " ";
}

#include <iostream>

using namespace std;

int suma(int A[][50], int n){
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + A[i][i];
    }
    return s;
}

int main(){
    int A[50][50], n;
    cin >> n;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cin >> A[i][j];
    cout << suma(A, n);
}

#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    while (b != 0){
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    int n, a = 1, b = 1, A[50]; 
    cin >> n;
    for (int i 1; i <= n; i++){
        cin >> A[i];
        if (A[i] < A[a]) a = i;
        if (A[i] > A[b]) b = i;
    }
    cout << A[a] << endl << A[b] << endl << cmmdc(A[a], A[b]);
}

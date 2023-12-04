#include <iostream>

using namespace std;

void ordonareC(int A[], int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n; j++){
            if (A[j] > A[j+1]){
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
}

int main(){
    int A[50], n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];
    ordonareC(A, n);
    for (int i = 1; i <= n; i++) cout << A[i] << " ";
}
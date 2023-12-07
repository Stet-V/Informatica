#include <iostream>

using namespace std;

// Algoritmi de Sortare a Unui Sir de Numere

// 1. Metoda Bulelor

void bule(int A[], int n){
    int a = 1;
    while (a != 0){
        a = 0;
        for (int i = 1; i < n; i++){
            if (A[i] > A[i+1]){
                int t = A[i];
                A[i] = A[i+1];
                A[i + 1] = t;
                a = 1;
            }
        }
    }
}

// 2. Metoda Interschimbarii

void interschimbare(int A[], int n){
    for (int i = 1; i <= n - 1; i++){
        for (int j = i + 1; j <= n; j++){
            if (A[j] < A[i]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

int main(){
    int A[50], n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> A[i];
    bule(A, n);
    for (int i = 1; i <= n; i++) 
        cout << A[i] << " ";
}

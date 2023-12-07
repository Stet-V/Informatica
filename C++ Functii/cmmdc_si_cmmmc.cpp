#include <iostream>

using namespace std;

// Determinarea Celui Mai Mare Divizor Comun (C.M.M.D.C.)

// 1. Algoritmul lui Euclid cu scaderi

int cmmdc(int a, int b){
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

// 2. Algoritmul lui Euclid cu impartiri

int cmmdc1(int a, int b){
    while (b != 0){
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

// Determinarea Celui Mai Mic Multiplu Comun (C.M.M.M.C.)

// 1. Folosind cel mai mare divizor comun

int cmmmc(int a, int b){
    return a * b / cmmdc(a, b);
}

// 2. Folosind un algoritm de tip Euclid

int cmmmc1(int a, int b){
    int c = a, d = b;
    while (c != d)
        if (c < d)
            c = c + a;
        else 
            d = d + b;
    return c;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << cmmdc(x, y) << " " << cmmmc(x, y);
}
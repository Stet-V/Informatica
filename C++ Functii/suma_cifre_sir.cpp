/*
Se citeste un sir de numere naturale. Sa se afiseze suma tuturor cifrelor care apar in termenii sirului respectiv.
Sa se afiseze suma tuturor cifrelor care apar in termenii sirului respectiv. 
Sa va utiliza in mod obligatoriu un subprogram pentru determinarea sumei cifrelor unui numar.
*/

#include <iostream>

using namespace std;

void sumacifre(int a, int &c){

    while(a != 0){

        c = c + a % 10;

        a = a / 10;

    }

}

int main(){

    int A[50], n, x;

    cin >> n;

    x = 0;

    for (int i = 1; i <= n; i++){

        cin >> A[i];

        sumacifre(A[i], x);

    }

    cout << x;

}

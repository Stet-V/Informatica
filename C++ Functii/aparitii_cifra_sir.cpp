/*
Se citeste un sir de 'n' numere naturale.
Sa se afiseze numarul de aparitii in cadrul sirului de numere a unei cifre citite alterior. 
Sa va utiliza in mod obligatoriu un subprogram.
*/

#include <iostream>

using namespace std;

void aparitii(int a, int b, int &c){

    c = 0;

    while(a != 0){

        if(a % 10 == b) c++;
        
        a = a / 10;

    }

}

int main(){

    int A[50], n, x, y, z;

    cin >> x >> n;

    y = 0;

    for(int i = 1; i <= n; i++){

        cin >> A[i];

        aparitii(A[i], x, z);

        y = y + z;

    }

    cout << y;

}

/*
Sa se realizeze in cadrul unui program un subprogram cu doi parametri 'a' si 'b', unde 'a' este un numar natural iar 'b' este o cifra. 
Subprogramul sa afiseze numarul de aparitii a cifrei 'b' in cadrul numarului 'a'. 
Programul va citi trei numere si o cifra si va afisa numarul de aparitii a cifrei in fiecare din cele trei numere.
*/

#include <iostream>

using namespace std;

int aparitii(int a, int b){

    int c = 0;

    while(a != 0){

        if(a % 10 == b) c++;
        
        a = a / 10;

    }

    return c;

}

int main(){

    int n, x, y, z;

    cin >> x >> y >> z >> n;

    cout << aparitii(x, n) << "\n" << aparitii(y, n) << "\n" << aparitii(z, n);

}

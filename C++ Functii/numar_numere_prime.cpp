#include <iostream>

using namespace std;

void prim(int a, int &c){

    c = 0;

    if (a == 1) c++;

    for (int i = 2; i <= a / 2; i++){
            
        if (a % i == 0) c++;

    }  

}

int main(){

    int A[50], n, x, y;

    cin >> n;

    y = 0;

    for (int i = 1; i <= n; i++){

        cin >> A[i];

        x = 0;

        prim(A[i], x);

        if (x == 0) y++;

    }

    cout << y;

}

#include <iostream>

using namespace std;

int main() {

    struct impartire {

    int cat;
    int rest;

    } rezultat;

    int x;

    cin >> x;

    if (x == 0) cout << "impartire nepermisa";

        else{

            rezultat.cat = 2018 / x;
            rezultat.rest = 2018 % x;
            
        }

}

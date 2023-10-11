#include <iostream>
#include <fstream>
 
using namespace std;
 
int main() {

    int a[50], n, i, j, t;

    ifstream f("date.in");

    n = 1;

    while(f >> a[n]) n++; 

/*

    while(f.eof() == 0 ) { 
        f >> a[n]; 
        n++;
    }

*/

    for (i = 1; i < n; i++) {
        for (j = 1; j < n-1; j++){
            if (a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    
    for (i = 1; i < n; i++) cout << a[i] << " ";
    
    f.close();

}
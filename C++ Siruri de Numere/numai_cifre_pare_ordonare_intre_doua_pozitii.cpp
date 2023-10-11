#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int a[50], n, i, j, x, y, p1, p2, t;

    ifstream f("atestat.in");
    ofstream g("atestat.out");

    cin >> p1 >> p2;

    f >> n;

    for (i = 1; i <= n; i++) {
        f >> a[i];
        cout << a[i] << " ";
    }

    cout << "\n";

    y = 0;

    for (i = 1; i <= n; i++) {
    x = 0;
    t = a[i];
    while(t!=0){
        if (t % 2 == 1){
            x = 1;
            break;
        }
        t = t/10;
    }
    if(x == 0){
        cout << a[i] << " ";
        y = 1;
        }
    }

    if(y == 0)cout << "NU EXISTA NUMERE NUMAI CU CIFRE PARE";

    for (i = p1; i <= p2; i++) {
        for (j = p1; j < p2; j++){
            if (a[j] < a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for (i = 1; i <= n; i++)
        g << a[i] << " ";

    f.close();
    g.close();

}

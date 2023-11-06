#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int a[50][50], n, i, j, k, x, y;

    ifstream f("atestat.in");
    ofstream g("atestat.out");

    f >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++){
            f >> a[i][j];
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++){
            if(i == j) a[i][j] = 22;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    y = 0;

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++){
            x = 0;
            for (k = 2; k <= a[i][j]/2; k++)
                if(a[i][j] % k == 0){
                    x=1;
                    break;
                }
            if (x == 0){
                g << a[i][j] << " ";
                y=1;
            }

        }

    if(y == 0) g << "NU EXISTA NUMERE PRIME";

    f.close();
    g.close();

}

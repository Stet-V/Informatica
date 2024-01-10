#include <iostream>

using namespace std;

int v[100], n, nr;

void CautareBinara(int i, int j){
    int m = (i + j) / 2;
    if (nr == v[m]) cout << m;
        else 
            if (i < j)
                if (nr < v[m]) CautareBinara(i, m - 1);
                    else CautareBinara(m + 1, j);
                else cout << "nu a fost gasit";
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    cin >> nr;
    CautareBinara(1, n);
}
#include <iostream>

using namespace std;

int v[50], n;

int maxim(int i, int j){
    int a, b, m;
    if (i == j) return v[i];
        else {
            m = (i + j) / 2;
            a = maxim(i, m);
            b = maxim(m + 1, j);
            if (a > b) return a;
                else return b;
        }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    cout << maxim(1 , n);
}

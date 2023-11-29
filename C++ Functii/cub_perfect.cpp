#include <iostream>

using namespace std;

void cuburi(int n){
    for (int i = n; i >= 1; i--) cout << i * i * i << " ";
}

int main(){
    int n;
    cin >> n;
    cuburi(n);
}
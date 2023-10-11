#include <iostream>
#include <fstream>
#include <string.h>
 
using namespace std;
 
int main() {
 
    char s[70];
    char c[] = "BCDFGHJKLMNPQRSTVWXYZ";
    int i, j, x, y;
 
    ifstream f("atestat.in");
    ofstream g("atestat.out");
 
    f.get(s, 70);
 
    x = 0;
    y = 1;
 
    for (i = 0; i < strlen(s); i++) {
 
        if ((s[i] > 96) && (s[i] < 123))
            s[i] = s[i] - 32;
 
        for (j = 0; j < strlen(c); j++)
            if (s[i] == c[j]) {
                x++;
                break;
            }
 
        if (s[i] == ' ') y++;
 
        cout << s[i];
 
    }
 
    cout << "\n" << x;
 
    g << y;
 
    f.close();
    g.close();
 
}
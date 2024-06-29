#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[51];
    cin.get(s, 51);
    for(int i = 0; i < strlen(s); i++)
        while(!strchr("aeiou", s[i]))
            s[i]--;
    cout << s;
}

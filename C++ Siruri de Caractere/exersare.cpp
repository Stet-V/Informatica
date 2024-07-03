#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[50], rez[50];
    strcpy(s, "sir de caractere");
    strcat(s, " concatenare, adica adaugare in sir");
    char *n = strchr(s, ' ');
    while(n != NULL){
        cout << n[2] << n << endl;
        n = strchr(n + 1, ' ');
    }
    char *t = strtok(s, " ");
    while(t != NULL){
        cout << strlen(t) << " ";
        if (!strchr("aeiou", t[0])){
            strcat(rez, t);
            strcat(rez, " ");
        }
        t = strtok(NULL, " ,");
    }
    cout << rez << endl;
    return 0;
}

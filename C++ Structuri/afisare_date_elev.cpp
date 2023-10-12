#include <iostream>
#include <string.h>

using namespace std;

int main() {

    struct elev {

    char nume[100];
    int varsta;
    float medie;

    } elevi[50];

    // elev elevi[50];

    int i, x;
    
    x = 1;

    for (i = 1; i <= 3; i++) {

        cout << "Introduceti numele elevului " << i << ": ";
        cin >> elevi[i].nume;

        cout << "Introduceti varsta elevului " << i << ": ";
        cin >> elevi[i].varsta;

        cout << "Introduceti media elevului " << i << ": ";
        cin >> elevi[i].medie;

        if (elevi[i].medie > elevi[x].medie) {

            x = i;
            
        }
    }

    cout << elevi[x].nume << " " << elevi[x].varsta << " " << elevi[x].medie;

}

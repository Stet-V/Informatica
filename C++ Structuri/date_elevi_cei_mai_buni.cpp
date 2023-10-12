#include <iostream>
#include <string.h>

using namespace std;

int main() {

    struct elev {

    char nume[100];
    int varsta;
    float medie;

    } elevi[50];

    int i, n, x;

    cout << "Introduceti numarul de elevi: ";
    cin >> n;
    
    x = 1;

    for (i = 1; i <= n; i++) {

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

    for (i = 1; i <= n; i++){

        if (elevi[i].medie == elevi[x].medie){

            cout << elevi[x].nume << " " << elevi[x].varsta << " " << elevi[x].medie << "\n";

        }

    }

}

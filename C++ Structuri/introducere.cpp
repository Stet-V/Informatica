#include <iostream>
#include <string.h>

using namespace std;

int main() {

    struct elev {

    char nume[100];
    int varsta;
    float medie;

    } elevi[3];

    float x = 0;
    int i;

    for (i = 1; i <= 3; i++) {

        cout << "Introduceti numele elevului " << i << ": ";
        cin >> elevi[i].nume;

        cout << "Introduceti varsta elevului " << i << ": ";
        cin >> elevi[i].varsta;

        cout << "Introduceti media elevului " << i << ": ";
        cin >> elevi[i].medie;

        if (elevi[i].medie > x) {

            x = elevi[i].medie;
            
        }
    }

    cout << "Cea mai mare medie introdusa este: " << x;

}
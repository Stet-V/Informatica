#include <iostream>
#include <math.h>

using namespace std;

int main() {

    struct punct {

        float x, y;

    } A, B;

    float d;

    cin >> A.x >> A.y >> B.x >> B.y;

    d = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));

    cout << d;

}

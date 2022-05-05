#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d=0;
    cin >> d;
    float  m[d];
    for (int i=0;i<d; i++) {
        cin >> m[i];
    }
    cout<< max (m,d);

    return 0;
}

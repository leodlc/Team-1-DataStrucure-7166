#include <iostream>
#include "Conjunto.h"
using namespace std;

int main()
{

    int elementosA[4];
    int elementosB[4];
    cout << "CONJUNTO 1:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\nIngrese el valor " << i + 1 << " del primer conjunto: ";
        cin >> elementosA[i];
    }
    for (int i = 0; i < 4; i++) {
        cout << "\nIngrese el valor " << i + 1 << " del segundo conjunto: ";
        cin >> elementosB[i];
    }
    Conjunto<int> conjuntoA(elementosA), conjuntoB(elementosB);
    Conjunto<int> conjuntoC;
    conjuntoC = conjuntoA == conjuntoB;
    conjuntoC = conjuntoA != conjuntoB;

    system("Pause");
    return 0;

}


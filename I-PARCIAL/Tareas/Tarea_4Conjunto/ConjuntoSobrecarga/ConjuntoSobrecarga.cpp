#include <iostream>
#include "Conjunto.h"
using namespace std;

int main()
{
    //int valor1, valor2, valor3, valor4;
    int elementosA[4] = { 4,5,8,1 };
    int elementosB[4] = { 6,1,5,3 };
    int x = 0, y = 0;
    Conjunto<int> conjuntoA(elementosA), conjuntoB(elementosB);
    //Conjunto<int> C;
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            if (elementosA[x]==elementosB[y]) {
                cout << elementosA[x] << " , " ;
                y = 4;
            }
        }
    }
    system("Pause");
    return 0;

}


#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

using namespace std;

void mc_3();
void mc_n();
int main()
{
    setlocale(LC_ALL, "");
    int op;

    do {
        system("cls");
        cout << "1. maximo comun divisor y minimo común multiplo (3 números)" << endl;
        cout << "2. maximo comun divisor y minimo comun multiplo (n números)" << endl;
        cout << "3. Salir " << endl;

        do {
            cout << "ingrese una opción: ";
            cin >> op;
            if (cin.fail()) {
                cin.clear();
            }
        } while (op < 1 || op > 3);
        switch (op) {
        case 1:
        {
            mc_3();
        }
        break;
        case 2:
        {
            mc_n();
        }
        break;
        }

        if (op != 3) {
            cout << endl;
            system("pause");
        }
    } while (op != 3);
}

void mc_3() {
    int a;
    int b;
    int c;

    a = operaciones::ingreso("ingresa el número 1: ");
    b = operaciones::ingreso("ingresa el número 2: ");
    c = operaciones::ingreso("ingresa el número 3: ");;

    int mcd = operaciones::maximo(a, b, c);
    int mcm = operaciones::minimo(a, b, c);
    cout << "el maximo comun divisor es: " << mcd << endl;
    cout << "el minimo común multiplo es: " << mcm << endl;
}

void mc_n() {
    vector<float> numbers;
    char op;

    do {
        int num;
        string input;
        cout << "Ingresa un número o presione n para salir: ";
        cin >> input;

        if (input == "n") {
            break;
        }

        try {
            num = std::stoi(input);
            numbers.push_back(num);
        }
        catch (std::invalid_argument) {
            continue;
        }

        numbers.push_back(num);
    } while (true);

    int mcd = operaciones::maximo_n(numbers);
    int mcm = operaciones::minimo_n(numbers);
    cout << "el máximo comun divisor es: " << mcd << endl;
    cout << "el minimo comun multiplo es:: " << mcm << endl;
}



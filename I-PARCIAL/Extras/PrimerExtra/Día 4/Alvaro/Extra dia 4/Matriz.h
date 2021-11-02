/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creación: 1/11/2021										 *
 *				Fecha de modificación: 1/11/2021									 *
 *************************************************************************************/
#include<iostream>
#include<cmath>

using namespace std;
template <typename t>
class Matriz 
{

private:
	t mat1[15][15], mat2[15][15], mat3[15][15];
public:
	int i, j, x, y, a, b;
	void ingreso1();
	void ingreso2();
	void multiplicacion();
};

template <class t> void Matriz<t>::ingreso1()
{
    cout << "\ningrese el número de filas de la primera matriz: ";
    cin >> x;
    cout << "\ningrese el número de columnas de la primera matriz: ";
    cin >> y;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
        {
            cout << "\ningrese el elemento[" << i << "][" << j << "] a la matriz 1: ";
            cin >> mat1[i][j];
        }
    cout << "\n la primera matriz es: \n";
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << "\t" << mat1[i][j];
        }
        cout << "\n";
    }
}

template <class t> void Matriz<t>::ingreso2()
{
    cout << "\ningrese el número de filas de la segunda matriz: ";
    cin >> a;
    cout << "\ningrese el número de columnas de la segunda matriz: ";
    cin >> b;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
        {
            cout << "\ningrese el elemento[" << i << "][" << j << "] de la segunda matriz: ";
            cin >> mat2[i][j];
        }
    cout << "\nla segunda matriz es:  \n";
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << "\t" << mat2[i][j];
        }
        cout << "\n";
    }
}

template <class t> void Matriz<t>::multiplicacion()
{
    if (y == a)
    {
        int k;
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < b; j++)
            {
                mat3[i][j] = 0;
                for (k = 0; k < y; k++)
                {
                    mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        }
        cout << "\n el producto entre las matrices es: \n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < b; j++)
            {
                cout << mat3[i][j] << " ";
            }
        }
    }
    else {
        cout << "\nno es posible realizar la multiplicación";
    }
}

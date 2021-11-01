/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creación: 31/10/2021										 *
 *				Fecha de modificación: 31/10/2021									 *
 *************************************************************************************/
#include<iostream>
#include<cmath>
using namespace std;


template <class t>
class mat
{
private:
    t mat1[15][15], mat2[15][15], mat3[15][15];
public:
    int i, j, x, y, a, b;
    void ingreso1();
    void ingreso2();
    void suma();
    void resta();
};

template <class t> void mat<t>::ingreso1()
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

template <class t> void mat<t>::ingreso2()
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


template <class t> void mat<t>::suma()
{
    if (x == a && y == b)
    {
        for (i = 0; i < x; i++)
            for (j = 0; j < y; j++)
                mat3[i][j] = mat1[i][j] + mat2[i][j];
        cout << "\nla suma de las matrices es :\n";
        for (i = 0; i < y; i++)
        {
            for (j = 0; j < y; j++)
            {
                cout << "\t" << mat3[i][j];
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n no es posible sumar\n";
    }
}


template <class t> void mat<t>::resta()
{
    if (x == a && y == b) {

        for (i = 0; i < x; i++)
            for (j = 0; j < y; j++)
                mat3[i][j] = mat1[i][j] - mat2[i][j];
        cout << "\nla resta d elas matrices es :\n";
        for (i = 0; i < y; i++) {
            for (j = 0; j < y; j++) {
                cout << "\t" << mat3[i][j];
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n no es posible restar\n";
    }
}




#include "Archivo.h"
#include <time.h>
#include <windows.h>
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;
Archivo::Archivo()
{
}


void Archivo::escribirArchivo(ListaCircularDoble lista, string nombreArch)
{
    fstream archivo;
    archivo.open(nombreArch, ios::out | ios::app | ios::in | ios::binary);

    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }

    lista.recorrer([&](Persona persona) {
        //archivo.write(reinterpret_cast<char*>(&persona), sizeof(persona));
        archivo.write((char*)&persona, sizeof(persona));
        });
    archivo.close();
}

void Archivo::leerArchivo(ListaCircularDoble lista, string nombreArch)
{
    fstream archivo;
    char ch;
    archivo.open(nombreArch, ios::in | ios::app);
    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }//if (EOF != (ch = getchar())){
    if (!archivo.eof()) {
        cout << "here2";
    }
    else {
    cout << "here3";
    lista.recorrer([&](Persona persona) {
       //archivo.read(reinterpret_cast<char*>(&persona), sizeof(persona));
       archivo.read((char*)&persona, sizeof(persona));
        lista.insertar(persona);
        });
    }
    archivo.close();
}

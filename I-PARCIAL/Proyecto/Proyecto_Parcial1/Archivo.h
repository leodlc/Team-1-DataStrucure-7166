
#include"ListaCircularDoble.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <ctime>
using namespace std;
#pragma once


class Archivo {

public:
    Archivo();
    void escribirArchivo(ListaCircularDoble lista, string nombreArch);
    void leerArchivo(ListaCircularDoble lista, string nombreArch);

};
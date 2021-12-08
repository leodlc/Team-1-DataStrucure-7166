
#include"ListaCircularDoble.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Alumno.h"
#include "Profesor.h"
using namespace std;
#pragma once


class Archivo {

public:
    Archivo();
    /*void escribirArchivo(ListaCircularDoble lista, string nombreArch);
    ListaCircularDoble leerArchivo(ListaCircularDoble *lista, string nombreArch);*/
    void escribirArchivoAlumno(ListaCircularDoble lista, string nombreArch);
    void leerArchivoAlumno(ListaCircularDoble lista, string nombreArch);
    void escribirArchivoProfesor(ListaCircularDoble lista, string nombreArch);
    ListaCircularDoble leerArchivoProfesor(string nombreArch);

};

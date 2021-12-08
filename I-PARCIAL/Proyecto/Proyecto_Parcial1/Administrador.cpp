#include "Administrador.h"
#include "Login.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Profesor.h"
#include "Archivo.h"

using namespace std;
#define dim 10
/***********************************************************************
 * Module:  Administrador.cpp
 * Author:  AsrockLeo
 * Modified: lunes, 29 de noviembre de 2021 21:04:27
 * Purpose: Implementation of the class Administrador
 ***********************************************************************/



 ////////////////////////////////////////////////////////////////////////
 // Name:       Administrador::getUsuario()
 // Purpose:    Implementation of Administrador::getUsuario()
 // Return:     std::string
 ////////////////////////////////////////////////////////////////////////

std::string Administrador::getUsuario(void)
{
	return usuario;
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::setUsuario(std::string newUsuario)
// Purpose:    Implementation of Administrador::setUsuario()
// Parameters:
// - newUsuario
// Return:     void
////////////////////////////////////////////////////////////////////////

void Administrador::setUsuario(std::string newUsuario)
{
	usuario = newUsuario;
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::getContrasena()
// Purpose:    Implementation of Administrador::getContrasena()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Administrador::getContrasena(void)
{
	return contrasena;
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::setContrasena(std::string newContrasena)
// Purpose:    Implementation of Administrador::setContrasena()
// Parameters:
// - newContrasena
// Return:     void
////////////////////////////////////////////////////////////////////////

void Administrador::setContrasena(std::string newContrasena)
{
	contrasena = newContrasena;
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::Administrador()
// Purpose:    Implementation of Administrador::Administrador()
// Return:     
////////////////////////////////////////////////////////////////////////

Administrador::Administrador()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::~Administrador()
// Purpose:    Implementation of Administrador::~Administrador()
// Return:     
////////////////////////////////////////////////////////////////////////

Administrador::~Administrador()
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::registrarAlumno()
// Purpose:    Implementation of Administrador::registrarAlumno()
// Return:     void
////////////////////////////////////////////////////////////////////////

Alumno Administrador::registrarAlumno(void)
{
	
	Alumno nuevoAlumno;
	string dato;
	long int CI = 0;
	std::cout << "Ingrese el nombre: " << endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoAlumno.setNombre(dato);

	std::cout << "Ingrese el Apellido: " << endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoAlumno.setApellido(dato);

	fflush(stdin);
	std::cout << "Ingrese el ID: " << endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoAlumno.setID(dato);

	std::cout << "Ingrese la cedula: " << endl;
	fflush(stdin);
	cin >> CI;
	CI = validarCedula(CI);
	nuevoAlumno.setCedula(CI);

	nuevoAlumno.generarCorreo(0);
	std::cout << nuevoAlumno.getCorreo() << endl;


	return nuevoAlumno;
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::registroProfesor()
// Purpose:    Implementation of Administrador::registroProfesor()
// Return:     void
////////////////////////////////////////////////////////////////////////

Profesor Administrador::registroProfesor(void)
{
	Profesor nuevoProfesor;
	string dato;
	long int CI =0;
	std::cout << "Ingrese el nombre: "<<endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoProfesor.setNombre(dato);
	
	std::cout << "Ingrese el Apellido: "<<endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoProfesor.setApellido(dato);
	
	fflush(stdin);
	std::cout << "Ingrese el ID: "<<endl;
	fflush(stdin);
	getline(cin >> ws, dato);
	nuevoProfesor.setID(dato);

	std::cout << "Ingrese la cedula: "<<endl;
	fflush(stdin);
	cin >> CI;
	CI = validarCedula(CI);
	nuevoProfesor.setCedula(CI);

	nuevoProfesor.generarCorreo(0);
	std::cout << nuevoProfesor.getCorreo()<<endl;

	return nuevoProfesor;
}



void menuAdmin() {
	
	cout << "\n\t\tCUENTA ADMIN\n\n";
	cout << " 1. REGISTRAR ALUMNO              " << endl;
	cout << " 2. REGISTRAR PROFESOR                " << endl;
	cout << " 3. REGRESAR                "		<< endl;
	cout << " 4. SALIR                   " << endl;
	

	cout << "\n INGRESE OPCION: ";
	
}
void Administrador::pantallaAdmin(void) {
	int opc,cont = 0;
	ListaCircularDoble listaProfesor;
	ListaCircularDoble listaAlumno;
	Archivo archivo;
	archivo.leerArchivo(listaProfesor, "Profesores.txt");
	archivo.leerArchivo(listaAlumno, "Alumnos.txt");

	do {
		system("cls");
		menuAdmin();
		
		cin >> opc;
		switch (opc) {
		case 1:
			
			//registrarAlumno();
			listaAlumno.insertar(registrarAlumno());
			break;
		case 2:
			listaProfesor.insertar(registroProfesor());
			//listaProfesor.recorrer([&](Persona profesor) {
			//	cout << "Profesor --> " << ++cont<<endl;
			//	cout << "Nombre: " <<profesor.getNombre()<<endl;
			//	cout << "Apellido: " <<profesor.getApellido()<<endl;
			//	});
			break;

		case 3:
			if(!listaProfesor.estaVacia()){
				archivo.escribirArchivo(listaProfesor, "Profesores.txt");
				cout << "here1";
			}
			if (!listaAlumno.estaVacia()) {
				archivo.escribirArchivo(listaAlumno, "Alumnos.txt");
				cout << "here2";
			}
			cout << "here3";
		break;

		case 4:
			
			exit( 1 );
			break;
		}
		system("pause");
	} while (opc != 3);

	
}

//long int Administrador::validarCedula(long int cedula)
//{
//	int A[dim], i = 9, sumapar = 0, sumaimp = 0, sumatot, mult = 0, digito;
//	long int coc = 0, tmpCedula = 0;
//	do
//	{
//		i = 9;
//		sumapar = 0;
//		sumaimp = 0;
//		mult = 0;
//		digito = 0;
//		tmpCedula = cedula;
//		do
//		{
//			coc = cedula / 10;
//			A[i] = cedula % 10;
//			i--;
//			cedula = coc;
//		} while (coc != 0);
//
//		for (i = 0; i < dim - 1; i += 2)
//		{
//			mult = A[i] * 2;
//			if (mult > 9)
//			{
//				mult -= 9;
//			}
//			sumapar += mult;
//		}
//		for (i = 1; i < dim - 2; i += 2)
//		{
//			sumaimp += A[i];
//		}
//		sumatot = sumapar + sumaimp;
//		digito = 10 - (sumatot % 10);
//		if (digito == 10)
//		{
//			digito = 0;
//		}
//		if (digito == A[9])
//		{
//			printf("Cedula valida.\n");
//		}
//		else
//		{
//			printf("\nCedula invalida\nIngrese nuevamente: ");
//			fflush(stdin);
//			scanf_s("%ld", &cedula);
//			fflush(stdin);
//		}
//
//	} while (digito != A[9]);
//	return tmpCedula;
//}

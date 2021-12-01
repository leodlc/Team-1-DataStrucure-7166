#include "Administrador.h"
#include <iostream>
#include <string>
using namespace std;
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

void Administrador::registrarAlumno(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Administrador::registroProfesor()
// Purpose:    Implementation of Administrador::registroProfesor()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Administrador::registroProfesor(void)
{
	Profesor nuevoProfesor;
	string dato;
	std::cout << "Ingrese el nombre: ";
	getline(cin, dato);
	

	nuevoProfesor.setNombre(dato);
	std::cout << "Ingrese el Apellido: ";
	getline(cin, dato);
	nuevoProfesor.setApellido(dato);
	std::cout << "Ingrese el ID: ";
	getline(cin, dato);
	nuevoProfesor.setID(dato);
	std::cout << "Ingrese la cedula: ";
	getline(cin, dato);
	nuevoProfesor.setCedula(dato);
	nuevoProfesor.generarCorreo(0);
	std::cout << nuevoProfesor.getCorreo();

}

void menuAdmin() {
	
	cout << "\n\t\tCUENTA ADMIN\n\n";
	cout << " 1. REGISTRAR ALUMNO              " << endl;
	cout << " 2. REGISTRAR PROFESOR                " << endl;
	cout << " 3. SALIR                   " << endl;
	

	cout << "\n INGRESE OPCION: ";
	
}
void Administrador::pantallaAdmin(void) {
	int opc;
	do {
		system("cls");
		menuAdmin();
		
		cin >> opc;
		switch (opc) {
		case 1:
			
			
			break;
		case 2:
			registroProfesor();
			
			break;
		case 3:
			
			break;
		}
		system("pause");
	} while (opc != 3);

	
}


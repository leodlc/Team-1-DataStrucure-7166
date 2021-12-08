#include "Archivo.h"


using namespace std;
Archivo::Archivo()
{
}

void Archivo::escribirArchivoAlumno(ListaCircularDoble lista, string nombreArch)
{
    ofstream archivo;
    archivo.open(nombreArch, ios::out | ios::app);

    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
    int cont = 0;
    lista.recorrer([&](Persona persona) {
        archivo.write(reinterpret_cast<char*>(&persona), sizeof(Persona));
        //archivo.write((char*)&persona, sizeof(Persona));
        cout << ++cont;
        });
    archivo.close();
}

void Archivo::leerArchivoAlumno(ListaCircularDoble lista, string nombreArch)
{
    ifstream archivo;
    Persona persona;

    archivo.open(nombreArch, ios::in );
    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
    else {
           
        while (true ) {
            archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona));
            if (archivo.eof())
                break;
            cout << persona.getNombre();
            //lista.insertar(persona);
        }
    }
    archivo.close();
}



void Archivo::escribirArchivoProfesor(ListaCircularDoble lista, string nombreArch)
{
	ofstream archivo( nombreArch, std::ios_base::out | std::ios_base::app );
    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
	
    lista.recorrer([&](Persona profesor) {
		archivo << profesor.getNombre( ) << ","
			<< profesor.getApellido( ) << ","
			<< profesor.getID( ) << ","
			<< profesor.getCedula( ) << ","
			<< profesor.getCorreo( ) << "\n";
        });
    archivo.close();
}

ListaCircularDoble Archivo::leerArchivoProfesor( string nombreArch)
{
	ifstream archivo( nombreArch );
	ListaCircularDoble lista;
    Profesor profesor;
    char ch;
    if (archivo.fail())
    {
        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
    else {
		string line;
		std::vector<std::string> values;
        while (getline(archivo, line)) {
			std::stringstream   linestream( line );
			std::string         value;

			while ( getline( linestream, value, ',' ) )
			{
				values.push_back( value );
			}
			profesor.setNombre( values.at(0));
			profesor.setApellido( values.at(1));
			profesor.setID( values.at( 2 ) );
			profesor.setCedula( std::stol(values.at(3)));
			profesor.setCorreo( values.at(4));
			lista.insertar( profesor );
			values.clear( );
        }
    }
    archivo.close();
    return lista;
}



//void Archivo::escribirArchivo(ListaCircularDoble lista, string nombreArch)
//{
//    fstream archivo;
//    archivo.open(nombreArch, ios::out | ios::app | ios::in );
//
//    if (archivo.fail())
//    {
//        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
//        exit(1);
//    }
//    //archivo.write(reinterpret_cast<char*>(&lista), sizeof(lista));
//
//    lista.recorrer([&](Persona persona) {
//        archivo.write(reinterpret_cast<char*>(&persona), sizeof(persona));
//        //archivo.write((char*)&persona, sizeof(persona));
//        });
//    archivo.close();
//}
//
//ListaCircularDoble Archivo::leerArchivo(ListaCircularDoble *lista, string nombreArch)
//{
//    fstream archivo;
//    Persona persona;
//    char ch;
//    archivo.open(nombreArch, ios::in | ios::app | ios::out );
//    if (archivo.fail())
//    {
//        cout << "ERROR!! EL ARCHIVO NO SE HA CREADO ";
//        exit(1);
//    }
//    else {
//        while (!archivo.eof() ) {
//       // while (archivo.peek() == std::ifstream::traits_type::eof()) {
//            archivo.read(reinterpret_cast<char*>(&persona), sizeof(persona));
//
//            lista->insertar(persona);
//        }
//    }
//    archivo.close();
//    return *lista;
//}



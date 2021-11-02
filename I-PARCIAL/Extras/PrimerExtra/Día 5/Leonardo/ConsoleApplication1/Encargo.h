#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
template <typename plantilla>
class Encargo{
private:
	plantilla nPersonas, nPizzas, nTrozos, nTrozosSobrantes, nTrozosPorPersona;
public:
	Encargo(plantilla _nPersonas, plantilla _nPizzas, plantilla _nTrozos, plantilla _nTrozosSobrantes, plantilla _nTrozosPorPersona) {
		nPersonas = _nPersonas;
		nPizzas = _nPizzas;
		nTrozos = _nTrozos;
		nTrozosSobrantes = _nTrozosSobrantes;
		nTrozosPorPersona = _nTrozosPorPersona;

	}
	plantilla getNpersonas() {

		return nPersonas;
	}

	plantilla getNpizzas() {

		return nPizzas;
	}
	plantilla getNtrozos() {

		return nTrozos;
	}

	plantilla getNtrozosSobrantes() {

		return  nTrozosSobrantes;
	}
	plantilla getNtrozosPorPersona() {

		return nTrozosPorPersona;
	}

	

	 int calcularNtrozos( plantilla _nPizzas) {
		nTrozos =_nPizzas*8;

		return nTrozos;

	 }





};


#pragma once
#include <iostream>
using namespace std;
template <typename PLANT>
class NotaAlumno{
private:
	PLANT practica, teorica, participacion, notaFinal;

public:
	NotaAlumno(PLANT _practica, PLANT _teorica, PLANT _participacion, PLANT _notaFinal) {
		practica = _practica;
		teorica = _teorica;
		participacion = _participacion;
	}
	double notaPractica(PLANT _practica) {
		_practica *= 0.30;
		return _practica;
	}
	double notaTeorica(PLANT _teorica) {
		_teorica *= 0.60;
		return _teorica;
	}
	double notaParticipacion(PLANT _participacion) {
		_participacion *= 0.10;
		return _participacion;
	}
	void calcNotaFinal(PLANT _notaFinal){
		_notaFinal = notaPractica(practica) + notaTeorica(teorica) + notaParticipacion(participacion);
		cout << " La nota final es de : " << _notaFinal << endl;
	}

};


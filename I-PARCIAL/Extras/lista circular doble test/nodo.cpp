#include "nodo.h"

Nodo::Nodo(Persona persona) {
    this->persona = persona;
}

Nodo *Nodo::getAnterior() {
    return anterior;
}

void Nodo::setAnterior(Nodo *nodo) {
    this->anterior = nodo;
}

Nodo *Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *nodo) {
    this->siguiente = nodo;
}

Persona Nodo::getPersona() {
    return persona;
}

void Nodo::setPersona(Persona persona) {
    this->persona = persona;
}


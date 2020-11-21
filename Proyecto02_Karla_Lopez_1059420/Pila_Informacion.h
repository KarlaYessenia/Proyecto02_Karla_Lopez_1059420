#pragma once
#include"Nodo2.h"
class Pila_Informacion
{
public:
	Nodo2* top;
	int count;
public:
	Pila_Informacion();
	void Apilar(Nodo2* nuevo);
	Nodo2* Desapilar();
	Nodo2 ObtenerCima();
	bool isEmpty();
};


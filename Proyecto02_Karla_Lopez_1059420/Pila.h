#pragma once
#include "Nodo4.h"
class Pila
{
public:
	Nodo4* top;
	int cn;

public:
	Pila();
	void Apilar(int cantidad, int tipo, int peso, int codigo);
	Nodo4* Desapilar();
	Nodo4 ObtenerCima();
	bool isEmpty();
};


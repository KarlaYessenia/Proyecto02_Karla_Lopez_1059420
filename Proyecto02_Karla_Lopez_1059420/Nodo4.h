#pragma once
#include"Pila_Producto.h"
class Nodo4
{
	public:
		int cantidad;
		int tipo;
		int peso;
		int cod;
		Nodo4* siguiente1;
		Nodo4* Anterior;

	public:
		Nodo4(int cantidad, int tipo, int peso, int cod);
		Nodo4();
};


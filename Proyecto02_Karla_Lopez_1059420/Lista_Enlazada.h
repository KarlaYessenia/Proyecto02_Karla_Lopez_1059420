#pragma once
#include"Nodo4.h"
class Lista_Enlazada
{
public:
	Nodo4* cabeza;
	Nodo4* cola;
	int contador;

public:
	Lista_Enlazada();
	void Insertar(int cantidad, int tipo, int peso, int codigo);
	Nodo4* ObtenerProducto(int contando, int band);
	bool isEmpty();
};


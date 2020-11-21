#pragma once
#include "Productos.h"
class Nodo1
{
public:
	char NumFila;
	int NumColumna;
	int NumFila1;
	Productos* producto;
	Nodo1* Siguiente = nullptr;
	Nodo1* Anterior = nullptr;

public:
	Nodo1(Productos* produc);
	Nodo1();
};

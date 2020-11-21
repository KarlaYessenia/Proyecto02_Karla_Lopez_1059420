#pragma once
#include "Productos.h"
class Nodo1
{
public:
	int NumFila1;
	int NumColumna;
	char NumFila;
	Productos* producto;
	Nodo1* Siguiente = nullptr;
	Nodo1* Anterior = nullptr;

public:
	Nodo1(Productos* produc);
	Nodo1();
};

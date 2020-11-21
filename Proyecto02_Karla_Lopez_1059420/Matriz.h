#pragma once
#include"Nodo3.h"
class Matriz
{
public:
	Nodo3* cabeza = nullptr;
	Nodo3* cola = nullptr;
	int count = 0;

public:
	void Insertar(bool fila, bool colum, Nodo3* BahiaI, Nodo3* BahiaD, Nodo3* BahiaA, Nodo3* BahiaB, int c, int f, Nodo3* InsertarB);
	void Eliminar();
	Nodo3* Buscar(int contando, int band);
};



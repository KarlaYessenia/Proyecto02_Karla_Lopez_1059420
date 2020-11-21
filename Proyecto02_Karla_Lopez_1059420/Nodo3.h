#pragma once
#include"Productos.h"
#include"Nodo1.h"
class Nodo3
{
	public:
		int columnaM;
		int fila;
		Productos* Bahia;
		Nodo1* MBahia;
		Nodo3* ABAJO = nullptr;
		Nodo3* ARRIBA = nullptr;
		Nodo3* DERECHA = nullptr;
		Nodo3* IZQUIERDA = nullptr;
		Nodo3* Siguiente = nullptr;
		Nodo3* Anterior = nullptr;

	public:
		Nodo3(Nodo1* bahia);
		Nodo3();
};


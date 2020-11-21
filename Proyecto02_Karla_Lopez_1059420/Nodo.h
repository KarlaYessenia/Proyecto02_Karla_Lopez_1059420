#pragma once
#include "Productos.h"
class Nodo
{
	public:
		Productos* producto;
		Nodo* IZQUIERDA = nullptr;
		Nodo* DERECHA = nullptr;
		Nodo* ABAJO = nullptr;
		Nodo* ARRIBA = nullptr;

	public:
		Nodo(Productos* produc);
		Nodo();
};


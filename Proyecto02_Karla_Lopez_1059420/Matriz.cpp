#include "Matriz.h"

void Matriz::Insertar(bool fila, bool colum, Nodo3* BahiaI, Nodo3* BahiaD, Nodo3* BahiaA, Nodo3* BahiaB, int c, int f, Nodo3* InsertarB)
{
	if (count == 0)
	{
		cabeza = InsertarB;
		cola = InsertarB;
	}
	else
	{
		//VALOR SIGUIENTE
		InsertarB->Siguiente = nullptr;
		//VALOR ANTERIOR
		InsertarB->Anterior = cola;

		//ULTIMO VALOR
		cola->Siguiente = InsertarB;
		cola = InsertarB;
	}
	if (fila == true && colum == true)
	{
		Nodo3* nodoPrimerF = new Nodo3();
		Nodo3* nodoPrimerC = new Nodo3();
		nodoPrimerF->fila = f;
		nodoPrimerC->columnaM = c;
		InsertarB->ARRIBA = nodoPrimerC;
		InsertarB->ABAJO = nullptr;
		InsertarB->IZQUIERDA = nodoPrimerF;
		InsertarB->DERECHA = nullptr;
	}
	else if (fila == true && colum == false)
	{

		Nodo3* nodoPrimerF = new Nodo3();
		nodoPrimerF->fila = f;
		InsertarB->ARRIBA = BahiaA;
		InsertarB->ABAJO = BahiaB;
		InsertarB->IZQUIERDA = nodoPrimerF;
		InsertarB->DERECHA = nullptr;

		BahiaA->ABAJO = InsertarB;
		BahiaB->ARRIBA = InsertarB;
	}
	else if (fila == false && colum == true)
	{
		Nodo3* nodoPrimerC = new Nodo3();
		nodoPrimerC->columnaM = c;
		InsertarB->ARRIBA = nodoPrimerC;
		InsertarB->ABAJO = nullptr;
		InsertarB->IZQUIERDA = BahiaI;
		InsertarB->DERECHA = BahiaD;

		BahiaI->DERECHA = InsertarB;
		BahiaD->IZQUIERDA = InsertarB;
	}
	else
	{
		InsertarB->ARRIBA = BahiaA;
		InsertarB->ABAJO = BahiaB;
		InsertarB->IZQUIERDA = BahiaI;
		InsertarB->DERECHA = BahiaD;

		BahiaA->ABAJO = InsertarB;
		BahiaB->ARRIBA = InsertarB;
		BahiaI->DERECHA = InsertarB;
		BahiaD->IZQUIERDA = InsertarB;
	}
	count++;
}

void Matriz::Eliminar()
{
}

Nodo3* Matriz::Buscar(int contando, int band)
{
	Nodo3* nodoAuxiliar = cabeza;
	if (band >= contando)
	{
		return nullptr;
	}
	else
	{
		for (int i = 0; i < band - 1; i++)
		{
			//ACTUALIZAR EL AUXILIAR PARA RECORRER LA LISTA
			nodoAuxiliar = nodoAuxiliar->Siguiente;
		}
		//EL ÚLTIMO NODO CON LA POSICIÓN DESEADA
		return nodoAuxiliar;
	}
}
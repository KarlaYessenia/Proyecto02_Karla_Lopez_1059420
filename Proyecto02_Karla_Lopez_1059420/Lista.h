#pragma once
#include "Nodo1.h"

class Lista
{
	public:
		Nodo1* cabeza;
		Nodo1* cola;
		int contador;


	public:
		Lista();
		void InsertarColumna(int valor);
		void InsertarFila(char letra, int NumLetra);
		Nodo1* ObtenerElementoFila(int contando, int band);
		Nodo1* ObtenerElementoColumna(int contando, int band);
		void AgregarProducto(Nodo1* nuevoProducto);
		int ContarElemento();

		//OBTENER PRODUCTO
		Nodo1* ObtenerProducto(int contando, int band);

		//ELIMINAR PRODUCTO
		Nodo1* ExtractAtStart();
		Nodo1* ExtractAtEnd();
		Nodo1* ExtractAtPosition(int position);
		bool isEmpty();
};


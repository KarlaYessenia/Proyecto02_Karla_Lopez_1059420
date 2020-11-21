#pragma once
#include"Lista.h"
#include"Nodo1.h"
#include"Productos.h"
class Orden
{
	//Se utiliza Quicksort para:
	//ordenar el tipo de producto
	void QuickSortTipo(Lista* lista, int start, int end);
	int DivideTipo(Lista* lista, int start, int end);

	//Se ordena por cantidad de producto
	void QuickSortCantidad(Lista* lista, int start, int end);
	int DivideCantidad(Lista* lista, int start, int end);

	//ordenar por peso
	void QuickSortPeso(Lista* lista, int start, int end);
	int DividePeso(Lista* lista, int start, int end);

	//Se utiliza bubble para:
	//Ordenar por fecha
	void BubbleSortFecha(Lista* lista);

	void IntercambioProducto(Nodo1* Producto1, Nodo1* Producto2);

};


#include "Orden.h"
void Orden::QuickSortTipo(Lista* lista, int start, int end)
{
	int pivot;
	if (start < end)
	{
		//PIVOTE
		pivot = DivideTipo(lista, start, end);

		//RECURSIVIDAD
		QuickSortTipo(lista, start, pivot - 1);

		QuickSortTipo(lista, pivot + 1, end);
	}
}

int Orden::DivideTipo(Lista* lista, int start, int end)
{
	int left;
	int right;
	int pivot;
	int temp;

	/*pivot = lista->ObtenerProducto(lista->count + 1, right)->producto->TipoProducto;
	left = start;
	right = end;

	//MIENTRAS NO SE CRUZEN LOS INDICES
	while (left < right)
	{
		while (lista->ObtenerProducto(lista->count+1, right)->producto->TipoProducto > pivot)
		{
			right--;
		}

		while ((left < right) && (lista->ObtenerProducto(lista->count + 1, left)->producto->TipoProducto <= pivot))
		{
			left++;
		}

		//SI TODAVÍA NO SE CRUZAN LOS INDICES SEGUMOS INTERCAMBIANDO
		if (left < right)
		{
			IntercambioProducto(lista->ObtenerProducto(lista->count + 1, left), lista->ObtenerProducto(lista->count + 1, right));
		}
	}*/

	//LOS INDICES YA SE HAN CRUZADO, PONEMOS EL PIVOT EN EL LUGAR QUE LE CORRESPONDE
	IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, right), lista->ObtenerProducto(lista->contador + 1, start));

	//LA NUEVA POSICIÓN DEL PIVOTE
	return right;

}

void Orden::QuickSortCantidad(Lista* lista, int start, int end)
{
	int pivot;
	if (start < end)
	{
		//PIVOTE
		pivot = DivideCantidad(lista, start, end);

		//RECURSIVIDAD
		QuickSortCantidad(lista, start, pivot - 1);

		QuickSortCantidad(lista, pivot + 1, end);
	}
}

int Orden::DivideCantidad(Lista* lista, int start, int end)
{
	int left;
	int right;
	int pivot;
	int temp;

	pivot = lista->ObtenerProducto(lista->contador + 1, right)->producto->Cantidad;
	left = start;
	right = end;

	//MIENTRAS NO SE CRUZEN LOS INDICES
	while (left < right)
	{
		while (lista->ObtenerProducto(lista->contador + 1, right)->producto->Cantidad > pivot)
		{
			right--;
		}

		while ((left < right) && (lista->ObtenerProducto(lista->contador + 1, left)->producto->Cantidad <= pivot))
		{
			left++;
		}

		//SI TODAVÍA NO SE CRUZAN LOS INDICES SEGUMOS INTERCAMBIANDO
		if (left < right)
		{
			IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, left), lista->ObtenerProducto(lista->contador + 1, right));
		}
	}

	//LOS INDICES YA SE HAN CRUZADO, PONEMOS EL PIVOT EN EL LUGAR QUE LE CORRESPONDE
	IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, right), lista->ObtenerProducto(lista->contador + 1, start));

	//LA NUEVA POSICIÓN DEL PIVOTE
	return right;
}

void Orden::QuickSortPeso(Lista* lista, int start, int end)
{
}

int Orden::DividePeso(Lista* lista, int start, int end)
{
	int left;
	int right;
	int pivot;
	int temp;

	/*pivot = lista->ObtenerProducto(lista->count + 1, right)->producto->PesoUnitario;
	left = start;
	right = end;

	//MIENTRAS NO SE CRUZEN LOS INDICES
	while (left < right)
	{
		while (lista->ObtenerProducto(lista->count + 1, right)->producto->PesoUnitario > pivot)
		{
			right--;
		}

		while ((left < right) && (lista->ObtenerProducto(lista->count + 1, left)->producto->PesoUnitario <= pivot))
		{
			left++;
		}

		//SI TODAVÍA NO SE CRUZAN LOS INDICES SEGUMOS INTERCAMBIANDO
		if (left < right)
		{
			IntercambioProducto(lista->ObtenerProducto(lista->count + 1, left), lista->ObtenerProducto(lista->count + 1, right));
		}
	}*/

	//LOS INDICES YA SE HAN CRUZADO, PONEMOS EL PIVOT EN EL LUGAR QUE LE CORRESPONDE
	IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, right), lista->ObtenerProducto(lista->contador + 1, start));

	//LA NUEVA POSICIÓN DEL PIVOTE
	return right;
}

void Orden::BubbleSortFecha(Lista* lista)
{
	for (int i = 0; i < lista->ContarElemento() - 1; i++)
	{
		for (int j = i + 1; j < lista->ContarElemento(); j++)
		{
			//COMPARAR
			if (lista->ObtenerProducto(lista->ContarElemento(), i)->producto->FechaAlmacenada > lista->ObtenerProducto(lista->ContarElemento(), j)->producto->FechaAlmacenada)
			{
				//HACER EL INTERCAMBIO
				IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, i), lista->ObtenerProducto(lista->contador + 1, j));
			}
		}
	}
}

//HACER EL INTERCAMBIO DE POKEMONS
void Orden::IntercambioProducto(Nodo1* Producto1, Nodo1* Producto2)
{
	Nodo1* auxiliar = Producto1;
	Productos* remp;
	remp = Producto2->producto;
	Nodo1* remplazando = new Nodo1(remp);

	Producto1->producto = Producto2->producto;
	//ASIGNAR VALORES
	Producto2->producto = remplazando->producto;
}

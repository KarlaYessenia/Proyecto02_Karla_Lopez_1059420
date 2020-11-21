#include "Pila.h"
#include"Nodo4.h"
Pila::Pila()
{
	top = nullptr;
	cn = 0;
}

void Pila::Apilar(int cantidad, int tipo, int peso, int codigo)
{
	Nodo4* nuevo = new Nodo4(cantidad, tipo, peso, codigo);
	nuevo->cantidad = cantidad;
	nuevo->tipo = tipo;
	nuevo->peso = peso;
	nuevo->cod = codigo;
	if (isEmpty()) {
		top = nuevo;
	}
	else
	{
		nuevo->siguiente1 = top;
		top = nuevo;
	}
	cn++;
}

Nodo4* Pila::Desapilar()
{
	if (!isEmpty())
	{
		Nodo4* temp = top;
		top = top->siguiente1;
		cn--;

		return temp;
	}
}

Nodo4 Pila::ObtenerCima()
{
	if (isEmpty())
	{
		return *new Nodo4();
	}
	else
	{
		return *top;
	}
}

bool Pila::isEmpty()
{
	bool vacio = true;
	if (cn != 0)
	{
		vacio = false;
	}
	return vacio;
}

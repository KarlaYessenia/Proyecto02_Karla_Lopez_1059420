#include "Lista_Enlazada.h"
Lista_Enlazada::Lista_Enlazada()
{
	cabeza = nullptr;
	cola = nullptr;
	contador = 0;
}

void Lista_Enlazada::Insertar(int cantidad,int tipo, int peso,int codigo)
{
    Nodo4* new_nodo = new Nodo4();
    new_nodo->cantidad = cantidad;
    new_nodo->tipo = tipo;
    new_nodo->peso = peso;
    new_nodo->cod = codigo;
    if (isEmpty()) //ESTA VACIA
    {
        cabeza = new_nodo;
        cola = new_nodo;
    }
    else
    {
        //VALOR SIGUIENTE
        new_nodo->siguiente1 = nullptr;
        //VALOR ANTERIOR
        new_nodo->Anterior = cola;

        //ULTIMO VALOR
        cola->siguiente1 = new_nodo;
        cola = new_nodo;
    }
    //CONTANDO ELEMENTOS
    contador++;
}
Nodo4* Lista_Enlazada::ObtenerProducto(int contando, int posicion)
{
    Nodo4* nodoAuxiliar = cabeza;
    if (posicion >= contando)
    {
        return nullptr;
    }
    else
    {
        for (int i = 0; i < posicion - 1; i++)
        {
            //ACTUALIZAR EL AUXILIAR PARA RECORRER LA LISTA
            nodoAuxiliar = nodoAuxiliar->siguiente1;
        }
        return nodoAuxiliar;
    }
}

bool Lista_Enlazada::isEmpty()
{
    return contador == 0;
}



#include "Pila_Informacion.h"
Pila_Informacion::Pila_Informacion()
{
    top = nullptr;
    count = 0;
}

void Pila_Informacion::Apilar(Nodo2* nuevo)
{
    if (isEmpty())
    {
        //VERIFICAR SI ES EL PRIMER ELEMENTO
        top = nuevo;
    }
    else
    {
        //VALOR SIGUIENTE
        nuevo->sig = nullptr;
        top = nuevo;
    }
    //CONTANDO ELEMENTOS
    count++;
}

Nodo2* Pila_Informacion::Desapilar()
{
    if (!isEmpty())
    {
        Nodo2* temp = top;
        top = top->sig;
        count--;

        return temp;
    }
}

Nodo2 Pila_Informacion::ObtenerCima()
{
    if (isEmpty())
    {
        return *new Nodo2();
    }
    else
    {
        return *top;
    }
}

bool Pila_Informacion::isEmpty()
{
    bool vacio = true;
    if (count != 0)
    {
        vacio = false;
    }
    return vacio;
}
#include "Lista.h"

Lista::Lista()
{
    cabeza = nullptr;
    cola = nullptr;
    contador = 0;
}

void Lista::InsertarColumna(int valor)
{
    Nodo1* new_nodo = new Nodo1();
    new_nodo->NumColumna = valor;
    if (isEmpty()) //ESe encuentra vacia
    {
        cabeza = new_nodo;
        cola = new_nodo;
    }
    else
    {
        //Ver el valor que sigue
        new_nodo->Siguiente = nullptr;
        //Ver valor de antes 
        new_nodo->Anterior = cola;

        //ve el ultimo valor
        cola->Siguiente = new_nodo;
        cola = new_nodo;
    }
    //Contar los elementos que se encuentran
    contador++;
}

void Lista::InsertarFila(char letra, int NumLetra)
{
    Nodo1* new_nodo = new Nodo1();
    new_nodo->NumFila = letra;
    new_nodo->NumFila1 = NumLetra;
    if (isEmpty()) //se encuentra vacia
    {
        cabeza = new_nodo;
        cola = new_nodo;
    }
    else
    {
        //ve el valor siguiente
        new_nodo->Siguiente = nullptr;
        //Ve el valor anterior
        new_nodo->Anterior = cola;

        //ve el ultimo valor
        cola->Siguiente = new_nodo;
        cola = new_nodo;
    }
    //Contar los elementos encontrados
    contador++;
}

//obtener los elementos de las filas
Nodo1* Lista::ObtenerElementoFila(int contando, int posicion)
{
    Nodo1* nodoAuxiliar = cabeza;
    if (posicion >= contando)
    {
        return nullptr;
    }
    else
    {
        for (int i = 0; i < posicion - 1; i++)
        {
            //se actualiza el aux para recorrer la fila
            nodoAuxiliar = nodoAuxiliar->Siguiente;
        }
        return nodoAuxiliar;
    }
}

//Obtener elemento de las columnas
Nodo1* Lista::ObtenerElementoColumna(int contando, int posicion)
{
    Nodo1* nodoAuxiliar = cabeza;
    if (posicion >= contando)
    {
        return nullptr;
    }
    else
    {
        for (int i = 0; i < posicion - 1; i++)
        {
            //Actualizar aun para obtener filas
            nodoAuxiliar = nodoAuxiliar->Siguiente;
        }
        return nodoAuxiliar;
    }
}

void Lista::AgregarProducto(Nodo1* nuevoProducto)
{
    if (isEmpty())
    {
        //Verificar que sea el primer elemento
        cabeza = nuevoProducto;
        cola = nuevoProducto;
    }
    else
    {
        //obtener el valor siguiente
        nuevoProducto->Siguiente = nullptr;
        //obtener valor anterior
        nuevoProducto->Anterior = cola;

        //obtener ultimo valor
        cola->Siguiente = nuevoProducto;
        cola = nuevoProducto;
    }
    //contar los elementos
    contador++;
}

int Lista::ContarElemento()
{
    return 0;
}

Nodo1* Lista::ObtenerProducto(int contando, int band)
{
    Nodo1* nodoAuxiliar = cabeza;
    if (band >= contando)
    {
        return nullptr;
    }
    else
    {
        for (int i = 0; i < band - 1; i++)
        {
            //actualizar el aux para poder recorrer la fila
            nodoAuxiliar = nodoAuxiliar->Siguiente;
        }
        //ver el ultimo nodo con la posicion que se desea
        return nodoAuxiliar;
    }
}

Nodo1* Lista::ExtractAtStart()
{
    Nodo1* temp = cabeza;
    if (!isEmpty())
    {
        cabeza = cabeza->Siguiente;
        cabeza->Anterior = nullptr;
        if (contador == 1)
        {
            cola = cabeza;
        }
        contador--;
    }
    return temp;
}

Nodo1* Lista::ExtractAtEnd()
{
    Nodo1* temp = cola;
    if (!isEmpty()) {

        if (contador == 1) {

            cola = cola->Siguiente;
            cabeza = cola;
        }

        else {
            Nodo1* pretemp = cabeza;
            temp = pretemp->Siguiente;
            while (temp != cola)
            {
                pretemp = temp;
                temp = pretemp->Siguiente;
            }

            pretemp->Siguiente = temp->Siguiente;
            cola = pretemp;
        }
        contador--;
    }
    return temp;
}

Nodo1* Lista::ExtractAtPosition(int position)
{
    Nodo1* temp = cabeza;
    if (!isEmpty()) {

        if ((contador == 1) || (position == 0)) {
            return ExtractAtStart();
        }
        else
        {
            if (position >= contador - 1)
            {
                return ExtractAtEnd();
            }
            else
            {
                Nodo1* pretemp = cabeza;
                temp = pretemp->Siguiente;

                int index = 1;

                while ((temp) && (index < position))
                {
                    pretemp = temp;
                    temp = pretemp->Siguiente;
                    index++;
                }

                pretemp->Siguiente = temp->Siguiente;
                pretemp = pretemp->Siguiente;
                pretemp->Anterior = temp->Siguiente;

                contador--;
            }

        }

    }
    return temp;
}

bool Lista::isEmpty()
{
    return contador == 0;
}

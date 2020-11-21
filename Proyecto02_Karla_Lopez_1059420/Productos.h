#pragma once
#include"Pila.h"
#include"Pila_Informacion.h"
class Productos
{
public:
	char Fila;
	int FNum;
	int Columna;
	int TipoProducto1 = 0;
	int TipoProducto2 = 0;
	int TipoProducto3 = 0;
	int PesoMaximo = 0;
	int PesoDisponible = 0;
	int PesoDisponible2 = 0;
	int PesoDisponible3 = 0;
	int Cantidad = 0;
	int Cant1 = 0;
	int Cant2 = 0;
	int Cant3 = 0;
	int PesoUnitario1 = 0;
	int PesoUnitario2 = 0;
	int PesoUnitario3 = 0;
	int PesoUtilizado = 0;
	int FechaAlmacenada = 0;
	char NombreA[50] = { "" };
	char NombreR[50] = { "" };
	int FechaRetiro;

public:
	Pila* pilaPro;
	Pila_Informacion* pilaD;
	/*Pila* PilaObjetos;*/

	//UBICACION DATA
	int UBIDATAFILA;
	int UBIDATACOLUM;

public:
	Productos();
};


#pragma once
#include"Informacion.h"
class Nodo2
{
	public:
		Informacion* inf;
		Nodo2* sig = nullptr;
	public:
		Nodo2(Informacion* dat);
		Nodo2();
};


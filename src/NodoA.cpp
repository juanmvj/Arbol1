#include "NodoA.h"

NodoA::NodoA(std::vector<int> pzl)
{
	this->Puzzel = pzl;
	this->Padre = NULL;
}

NodoA::NodoA(std::vector<int> pzl , NodoA* padre)
{
	this->Puzzel = pzl;
	this->Padre = padre;
}
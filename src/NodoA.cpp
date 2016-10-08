/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "NodoA.h"
/**
constructor de nodo
@params  pzl
@result void
*/
NodoA::NodoA(std::vector<int> pzl)
{
	this->Puzzel = pzl;
	this->Padre = NULL;
}
/**
constructor de nodo con padre
@params  pzl, padre
@result void
*/
NodoA::NodoA(std::vector<int> pzl , NodoA* padre)
{
	this->Puzzel = pzl;
	this->Padre = padre;
}
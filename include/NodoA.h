/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:clase nodo con atributos y metodos
*/
#include <iostream>
#include <vector>

class NodoA
{
public:
	std::vector<int> Puzzel;
	std::vector<NodoA*> Hijos;
	NodoA * Padre;
	NodoA(std::vector<int> pzl);
	NodoA(std::vector<int> pzl , NodoA* padre);
};
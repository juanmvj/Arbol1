/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:clase arbol con sus metodos y atributos
	
*/
#include <stack>
#include "NodoA.h"


class ArbolP
{
private:
	NodoA* BusqRec(std::vector<int> ref, NodoA* aux);
public:
	NodoA* Raiz;
	ArbolP(std::vector<int> orig);
	NodoA* BusqNodo(std::vector<int> v);
	bool AddNodo(std::vector<int> ref,std::vector<int> aux);
	bool ElimNodo(std::vector<int> ref);
	std::stack<NodoA*> Camino(NodoA* aux);
};
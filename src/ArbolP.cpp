/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
*/
#include "ArbolP.h"
/**
constructor arbol
@params orig
@result void
*/
ArbolP::ArbolP(std::vector<int> orig)
{
	this->Raiz = new NodoA(orig);
}
/**
metdodo para añadir nodo
@params ref, aux
@result bool
*/
bool ArbolP::AddNodo(std::vector<int> ref,std::vector<int> aux)
{
	if(this->Raiz==NULL)
	{
		this->Raiz=new NodoA(aux);
		std::cout<<"El arbol esta vacio, no existe la referencia"<<std::endl;
		return false;
	}
	NodoA* Padre=BusqNodo(ref);
	if(Padre==NULL)
	{
		std::cout<<"No existe la referencia"<<std::endl;
		return false;
	}
	else
	{
		NodoA* hijo=new NodoA(aux,Padre);
		Padre->Hijos.push_back(hijo);
	}
	return true;
}

/**
metdodo para eliminar nodo 
@params ref
@result bool
*/
bool ArbolP::ElimNodo(std::vector<int> ref)
{
	if (this->Raiz==NULL)
	{
		std::cout<<"No existe el valor en el arbol"<<std::endl;
		return false;		
	}
	NodoA* aux=BusqNodo(ref);
	if (aux == NULL)
	{
		std::cout<<"No existe el valor en el arbol"<<std::endl;
		return false;
	}
	for (int i = 0; i < aux->Hijos.size(); ++i)
	{
		aux->Padre->Hijos.push_back(aux->Hijos[i]);
		aux->Hijos[i]=aux->Padre;
	}
	aux->Hijos.clear();
	aux->Padre=NULL;
	for (int i = 0; i < aux->Padre->Hijos.size(); ++i)
	{
		if (aux==aux->Padre->Hijos[i]){
			aux->Padre->Hijos.erase(aux->Padre->Hijos.begin()+i);
			return true;
		}
	}
	return false;
}

/**
el camino de un nodo en el arbol
@params  aux
@result 
*/
std::stack<NodoA*> ArbolP::Camino(NodoA* aux)
{
	std::stack<NodoA*> Camino;
	while(aux!=Raiz){
		Camino.push(aux);
		aux=aux->Padre;
	}
	return Camino;
}
/**
busqueda de un nodo en el arbol
@params  ref
@result NodoA*
*/
NodoA* ArbolP::BusqNodo(std::vector<int> ref)
{
	if(Raiz==NULL)
	{
		std::cout<<"No existen elementos en el arbol"<<std::endl;
		return NULL;
	}
	return BusqRec(ref,Raiz);
}
/**
el camino de un nodo en el arbol
@params  ref,aux
@result NodoA*
*/
NodoA* ArbolP::BusqRec(std::vector<int> ref, NodoA* aux)
{
	NodoA* Busque=aux;
	NodoA* 	Res;
	if(Busque->Puzzel==ref)
		return Busque;
	if(Busque->Hijos.empty()) 
		return NULL;
	for(int i=0; i<Busque->Hijos.size();++i){
		Res = BusqRec(ref,Busque->Hijos[i]);
		if(Res!=NULL)
			return Res;			
	}
	return NULL;
}

#include "ArbolP.h"

int main(){
	std::vector<int> origen;
	std::vector<int> HR;
	std::vector<int> HRd;
	origen.push_back(1);
	ArbolP arbol(origen);
	std::cout<<"         "<<(int)arbol.Raiz->Puzzel[0]<<std::endl;
	
	HR.push_back(2);
	arbol.AddNodo(origen,HR);
	HRd.push_back(3);
	arbol.AddNodo(origen,HRd);
		std::cout<<"      "<<arbol.BusqNodo(HR)->Puzzel[0]<<"        "<<arbol.BusqNodo(HRd)->Puzzel[0]<<std::endl;
	
	std::vector<int> HIzqR;
	std::vector<int> HDerR;
	HIzqR.push_back(4);
	HDerR.push_back(5);
	arbol.AddNodo(HR,HIzqR);
	arbol.AddNodo(HR,HDerR);
	std::cout<<"   "<<arbol.BusqNodo(HIzqR)->Puzzel[0]<<"  "<<arbol.BusqNodo(HDerR)->Puzzel[0];


	std::vector<int> HIzqRd;
	std::vector<int> HDerRd;
	std::vector<int> HDerRd2;
	HIzqRd.push_back(6);
	HDerRd.push_back(7);
	HDerRd2.push_back(10);
	arbol.AddNodo(HR,HIzqRd);
	arbol.AddNodo(HR,HDerRd);
	arbol.AddNodo(HR,HDerRd2);
	std::cout<<"        "<<arbol.BusqNodo(HIzqRd)->Puzzel[0]<<"  "<<arbol.BusqNodo(HDerRd)->Puzzel[0]<<"  "<<arbol.BusqNodo(HDerRd2)->Puzzel[0]<<std::endl;

	std::vector<int> HHDerR;
	std::vector<int> HHDerR2;
	HHDerR.push_back(8);
	HHDerR2.push_back(9);
	arbol.AddNodo(HDerR,HHDerR);
	arbol.AddNodo(HDerR,HHDerR2);
	std::cout<<"     "<<arbol.BusqNodo(HHDerR)->Puzzel[0]<<"  "<<arbol.BusqNodo(HHDerR2)->Puzzel[0]<<std::endl;
	return 0;
}
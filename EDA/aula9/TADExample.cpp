#include <iostream>

#include "tadData.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

	//cData d; //objeto d da classe cData sem construtor
	int dia , mes , ano;
	std::cout << "\tDatas\n\t====="; //contra barra t é uma deslocada
	
	std::cout << "\n\nForneca uma data no formato: (dd mm [-]aaaa) \n\tData = ";	
	//std::cin >> d.dia >> d.mes >> d.ano;

	//std::cout << "\nA data fornecida foi: " << d.dia << " / " << d.mes << " / " << d.ano << std::endl; 
	
	std::cin >> dia >> mes >> ano;
	cData d(dia,mes,ano); //classe com construtor que ja atualiza os atributos do objeto com parametro, só deve ser usado após obter os parametros
	d.setDia(dia);
	d.setMes(mes);
	d.setAno(ano);
	std::cout << "\nA data fornecida foi: " << d.getDia() << " / " << d.getMes() << " / " << d.getAno() << std::endl; 
	return 0;
}



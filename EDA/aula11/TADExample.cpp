#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "tadVetorDin.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) { //alocação dinâmica, uso de ponteiro

	srand ( time(NULL) );

	unsigned int numElementos; // alocação estática - compilador define a alocação

	if (argc > 1)
		numElementos = atoi(argv[1]);
	else
		numElementos = 10;

	cVetorDin vet(numElementos);

	while (vet.posicoesLives() > 0) 
		if (!vet.InsereElem(rand() % numElementos*10) ) {//se insereElem retornar falso, então...
			std::cout << "Capacidade do vetor estourada\n";
			return -1;
			}

	std::cout << vet;
	
	if(vet.RemoveElem(30))
		std::cout << "Primeiro valor 30 removido do vetor." << std::endl;
	else
		std::cout << "Valor não foi removido, pois não existe no vetor." << std::endl;
	std::cout << vet;
	
	
	int aux;
	if(vet.BuscaElem(130, aux))
		std::cout << aux << " encontrado no vetor." << std::endl;
	else
		std::cout << "Valor não encontrado." << std::endl;
		

	if (!vet.InsereElem(rand() % numElementos*10) ) 
		std::cout << "Capacidade do vetor estourada\n";
		
	std::cout << vet;
}

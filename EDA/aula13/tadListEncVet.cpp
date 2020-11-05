/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadListEncVet.h"

// ******************************************************
// ***
// ******************************************************
cListaEncDin::cListaEncDin()  { 
	inicio 	= NULL;
	numNos = 0;
}

// ******************************************************
// ***
// ******************************************************
cListaEncDin::cListaEncDin(int tam)  { 

	std::cout << tam << std::endl;

	vet 	= new cNo[tam];

	numElem 	= tam;
	inicio 		= -1;
	posLivres 	= tam;

	for (int i = 0 ; i < numElem ; i++) 
		vet[i].setProx(i);
}


// ******************************************************
// ***
// ******************************************************
cListaEncDin::cListaEncDin(const cListaEncDin &v)  { 

	vet = new cNo[v.numElem];

	std::cout << vet << std::endl;

	for (int i = 0 ; i < v.numElem ; i++) {
		vet[i].setDado(v.vet[i].getDado());    
		vet[i].setProx(v.vet[i].getProx());    
		}

	numElem 	= v.numElem;
	inicio 		= v.inicio;
	posLivres 	= v.posLivres;
}

// ******************************************************
// ***
// ******************************************************
cListaEncDin::~cListaEncDin() { 

	if (vet != NULL) 
		delete [] vet;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::buscaPosicaoLivre(int& p)  { 

	return false;
}

// ******************************************************
// ***
// ******************************************************
cNo* cListaEncDin::buscaUltimaPosicao()  { 
	if(inicio == NULL)
		return inicio;
	
	cNo* noCorrente = inicio;
	while(noCorrente->getProx() != NULL) //(*noCorrente).getProx() != NULL
		noCorrente = noCorrente->getProx(); //noCorrente = (*noCorrente).getProx()
		
	return noCorrente;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::InsereElem(int dado)  { 

	cNo* novoNo = new cNo(dado);
	cNo* ultNo = buscaUltimoNo();


	if (inicio = NULL)
		inicio = novoNo;
	else 
		ultNo->setProx(novoNo); //(*ultNo).setProx(novoNo)

	numNos++;

	return true;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::BuscaElem(int chave, int& pos)  { 

	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::BuscaElem(int chave, int& pos, int& ant)  { 

	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::RemoveElem(int chave)  {  

	return false;
}

// ******************************************************
// ***
// ******************************************************
int cListaEncDin::posicoesLivres() {  

	return (posLivres);
}

// ******************************************************
// ***
// ******************************************************
int cListaEncDin::tamanho() {

	return (numElem);
}

// ******************************************************
// ***
// ******************************************************
void cListaEncDin::printVetor() { 

	std::cout << "===================================" << std::endl;
	std::cout << "Numero de elementos = " << numElem << std::endl;
	std::cout << "Inicio = " << inicio << std::endl;
	std::cout << "Posicoes Livres = " << posLivres << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	int count=0;

	while (count < numElem) { 
		std::cout 	<< "[ " << count
					<<  " ] = ( " << vet[count].getDado() 
					<<  " , " << vet[count].getProx() << " ) "
					<< std::endl;
		count++;
		}

	std::cout << "===================================" << std::endl;

}

// ******************************************************
// ***
// ******************************************************
std::ostream &operator<<( std::ostream &output, const cListaEncDin &v ) { 

	output << "===================================" << std::endl;
	output << "Endereco do vetor base = " << v.vet << std::endl;
	output << "Numero de elementos = " << v.numElem << std::endl;
	output << "Posicoes Livres = " << v.posLivres << std::endl;
	output << "-----------------------------------" << std::endl;

	if (v.inicio == -1)
		output << " **** Lista Vazio ****" << std::endl;
	else {
		int noCor = v.inicio;
		int count=0;

		while (noCor != -1) { 
			output << "[ " << count++ <<  " ] = " << v.vet[noCor].getDado() << std::endl;
			noCor = v.vet[noCor].getProx();
			}
		}

	output << "===================================" << std::endl;

	return output;            
}
				

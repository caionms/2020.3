/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadVetorDin.h"

// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin()  { //vetor vazio
	vet		= NULL;
	numElem = 0; //tamanho total do vetor e não o número de elementos
	ultPos 	= -1; 
}

// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin(int tam)  { 

	vet 	= new int[tam]; //associando a área de memória ao vet
	numElem = tam; //tamanho total do vetor e não o número de elementos
	ultPos 	= -1;
}


// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin(const cVetorDin &v)  { 

	vet = new int[v.numElem]; //cria um vetor do mesmo tamanho do de referencia

	for (int i = 0 ; i < v.ultPos ; i++)
		vet[i] = v.vet[i]; //vet = &100 => vet[i] = &100+1*sizeof(int)

	numElem = v.numElem;
	ultPos 	= v.ultPos;
}

// ******************************************************
// ***
// ******************************************************
cVetorDin::~cVetorDin() { //destrutor

	if (vet != NULL)
		delete vet;
}

// ******************************************************
// ***
// ******************************************************
bool cVetorDin::InsereElem(int dado)  { 

	if (ultPos == (numElem-1) )
		return false;

	vet[++ultPos] = dado; //aumenta o valor da ultPos ao mesmo tempo que atribui o valor a posição do vetor

	return true;
}

// ******************************************************
// ***
// ******************************************************
bool cVetorDin::BuscaElem(int chave, int& pos)  {
	if(numElem = 0)
		return false;
	else{
		for (int i = 0 ; i < ultPos+1 ; i++){
			if(vet[i] == chave){
				pos = i;
				return true;
			}
		}
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cVetorDin::RemoveElem(int chave)  { 
	if(numElem = 0)
		return false;
	else{
		for (int i = 0 ; i < ultPos+1 ; i++){
			if(vet[i] == chave){
				for(int u=i;u<ultPos;u++){
					vet[u] = vet[u+1];
				}
				vet[ultPos] = NULL;
				ultPos--;
				return true;
			}
		}
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
int cVetorDin::posicoesLives() { //como numElem é privado, você usa essa função para retornar a quantidade de posições livres

	return (numElem - (ultPos+1));
}

// ******************************************************
// ***
// ******************************************************
int cVetorDin::tamanho() {//como numElem é privado, você usa essa função para retornar a quantidade de elementos

	return (numElem);
}

// ******************************************************
// ***
// ******************************************************
std::ostream &operator<<( std::ostream &output, const cVetorDin &v ) { 

	output << "===================================" << std::endl;
	output << "Numero de elementos = " << v.numElem << std::endl;
	output << "Ultima posicao livre = " << v.ultPos << std::endl;
	output << "-----------------------------------" << std::endl;

	for (int k = 0 ; k < v.ultPos+1 ; k++)
		output << "[ " << k <<  " ] = " << v.vet[k] << std::endl;

	output << "===================================" << std::endl;

	return output;            
}

// ******************************************************
// ***
// ******************************************************
std::istream &operator>>( std::istream  &input, cVetorDin &v ) { 

	for (int k = 0 ; k < v.numElem ; k++)
		input >> v.vet[k];

	return input;            
}
				

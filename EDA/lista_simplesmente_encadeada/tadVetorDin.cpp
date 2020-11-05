/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadVetorDin.h"

// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin()  { 
	vet		 = NULL;
	numElem  = 0;
	vetLivre = NULL;
}

// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin(int tam)  { 

	vet 	 = new int[tam];
	numElem  = tam;
	vetLivre = new bool[tam];
	for(int i=0;i<tam;i++) //indica que todas as posições no vetor estão livres
		vetLivre[i] = true;
}


// ******************************************************
// ***
// ******************************************************
cVetorDin::cVetorDin(const cVetorDin &v)  { 

	vet 	 = new int[v.numElem];
	vetLivre = new bool[v.numElem];
	for(int i=0;i<v.numElem;i++) { //preenche o vetor secundário(posições livres)
		vetLivre[i] = v.vetLivre[i];
		if(vetLivre[i] == false) //caso a posição esteja ocupada, preenche o valor da posição no vetor principal(valores)
			vet[i] = v.vet[i];
	}
	numElem  = v.numElem;
}

// ******************************************************
// ***
// ******************************************************
cVetorDin::~cVetorDin() { 

	if (vet != NULL){
		delete vet;
		delete vetLivre;
	}
}

// ******************************************************
// ***
// ******************************************************

bool cVetorDin::TesteLivre() const { //testa se existe alguma posição livre no vetor
	for(int i=0;i<numElem;i++){
		if(vetLivre[i] == true)
			return true;
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************

int cVetorDin::PosicaoLivre() { //retorna a primeira posição livre no vetor, se não houver retorna -1

	for(int i=0;i<numElem;i++){
		if(vetLivre[i] == true)
			return i;
	}
	return (-1);
}

// ******************************************************
// ***
// ******************************************************

bool cVetorDin::InsereElem(int dado)  { //se houver posição livre, insere o novo elemento nessa posição

	if(TesteLivre()){
		vet[PosicaoLivre()] 	 = dado;
		vetLivre[PosicaoLivre()] = false;
		return true;
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cVetorDin::BuscaElem(int chave, int& pos)  { //se a posição estiver ocupada, testa se o valor nessa posição é igual a chave e retorna o índice da posição caso a chave for igual ao elemento

	for(int i=0;i<numElem;i++){
		if(vetLivre[i]==false && vet[i]==chave){
			pos = i;
			return true;
		}
	}		
	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cVetorDin::RemoveElem(int chave)  {  //caso encontre o elemento no vetor, muda para livre a posição no vetor secundário(posições livres)

	int p;
	if (!BuscaElem(chave, p)) 
		return false;
	vetLivre[p] = true;
	return true;
}

// ******************************************************
// ***
// ******************************************************
int cVetorDin::tamanho() {

	return (numElem);
}

// ******************************************************
// ***
// ******************************************************
std::ostream &operator<<( std::ostream &output, const cVetorDin &v ) { 

	output << "===================================" << std::endl;
	output << "Endereco do vetor = " << v.vet << std::endl;
	output << "Tamanho do vetor = " << v.numElem << std::endl;
	output << "Estado do vetor = ";
	if(v.TesteLivre())
		output << "Incompleto" << std::endl;
	else
		output << "Completo"<< std::endl;
	output << "-----------------------------------" << std::endl;
	output << "Os elementos do vetor são:" << std::endl;
  int count=0;
	for (int k = 0 ; k < v.numElem ; k++){
		if(v.vetLivre[k] == false){
			output << "[ " << count <<  " ] = " << v.vet[k] << std::endl;
      count++;
    }
	}

	output << "===================================" << std::endl;

	return output;            
}

// ******************************************************
// ***
// ******************************************************
std::istream &operator>>( std::istream  &input, cVetorDin &v ) { 

	for (int k = 0 ; k < v.numElem ; k++){
		if(v.vetLivre[k] == false)
			input >> v.vet[k];
	}

	return input;            
}
				

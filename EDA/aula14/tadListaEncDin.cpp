/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadListaEncDin.h"

// ******************************************************
// ***
// ******************************************************
cListaEncDin::cListaEncDin()  { 
	inicio	= NULL;
	numElem = 0;
}

// ******************************************************
// ***
// ******************************************************
cListaEncDin::cListaEncDin(const cListaEncDin &v)  {
 
 	numElem = v.numElem;
	inicio = new cNo(*v.inicio); //dentro do new é um ponteiro
	cNo* noCorrenteAntigo = v.inicio;
	cNo* noCorrenteNovo = inicio;
	while(noCorrenteAntigo->getProx() != NULL){
		cNo* noProx = new cNo(*noCorrenteAntigo->getProx());
		noCorrenteNovo->setProx(noProx);
		noCorrenteAntigo = noCorrenteAntigo->getProx();
		noCorrenteNovo = noCorrenteNovo->getProx();
	}

}

// ******************************************************
// ***
// ******************************************************
cListaEncDin::~cListaEncDin() { //confirmar

	cNo* noAnterior = inicio;
	cNo* noCorrente = inicio->getProx();
	while(noCorrente->getProx() != NULL){
		delete noAnterior;
		noAnterior = noCorrente;
		noCorrente = inicio->getProx();
	}
	delete noAnterior;
	delete noCorrente;
		
}

// ******************************************************
// ***
// ******************************************************
cNo* cListaEncDin::buscaUltimaPosicao()  {

	if(inicio == NULL)
		return NULL;
		
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
	cNo* ultNo = buscaUltimaPosicao();
	if (inicio == NULL)
		inicio = novoNo;
	else 
		ultNo->setProx(novoNo); //(*ultNo).setProx(novoNo)
	numElem++;
	return true;

	/* Sem a função buscaUltimaPosicao();
	if(inicio = NULL){
		inicio = new cNo(dado);
		numElem++;
		return true;
	}
	
	cNo* noCorrente = inicio;
	while(noCorrente->getProx() != NULL)
		noCorrente = noCorrente->getProx();
	cNo* noProx = new cNo(dado);
	noCorrente->setProx(noProx);
	numElem++;
	return true;
	*/

}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::BuscaElem(int chave, cNo** no)  { 
	if(inicio == NULL)
		return false;
	else if(inicio->getDado() == chave){
		no = &inicio;
		return true;
	}
	cNo* noCorrente = inicio->getProx();//começa no segundo elemento, pois já testou o primeiro
	while(noCorrente->getProx() != NULL && noCorrente->getDado() != chave){
		noCorrente = noCorrente->getProx();
	}
	if(noCorrente->getDado() == chave){
		no = &noCorrente;
		return true;
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::BuscaElem(int chave, cNo** noAnterior, cNo** noCorrente)  { 
	if(inicio == NULL) //lista vazia
		return false;
	else if(inicio->getDado() == chave){ //primeiro elemento é chave
		*noAnterior = NULL;
		*noCorrente = inicio;
		return true;
	}
	//começa do segundo elemento, porque o primeiro ja foi testado
	cNo* noAn = inicio;
	cNo* noCo = inicio->getProx();
	while(noCo->getProx() != NULL && noCo->getDado() != chave){
		noAn = noCo;
		noCo = noCo->getProx();
	}
	if(noCo->getDado() == chave){ 
		*noAnterior = noAn;
		*noCorrente = noCo;
		return true;
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
bool cListaEncDin::RemoveElem(int chave)  {  
	cNo* noCorrente;
	cNo* noAnterior;
	if(BuscaElem(chave,&noAnterior,&noCorrente)){
		if(noCorrente == inicio)
			inicio = noCorrente->getProx();
		else
			noAnterior->setProx(noCorrente->getProx());
		numElem--;
		return true;
	}
	return false;
}

// ******************************************************
// ***
// ******************************************************
int cListaEncDin::tamanho() {

	return (numElem);
}


cNo* cListaEncDin::getInicio(){

	return inicio;
}

// ******************************************************
// ***
// ******************************************************
std::ostream &operator<<( std::ostream &output, const cListaEncDin &l ) { 

	output << "===================================" << std::endl;
	output << "Endereco do inicio = " <<  l.inicio << std::endl;
	output << "Numero de elementos = " << l.numElem << std::endl;
	output << "-----------------------------------" << std::endl;

	if (l.inicio == NULL)
		output << " **** Lista Vazia ****" << std::endl;
	else {
		cNo* noCorrente = l.inicio;
		int count=0;

		while (noCorrente != NULL) { 
			output << "[ " << count++ <<  " ] = " << noCorrente->getDado() << std::endl;
			noCorrente = noCorrente->getProx();
			}
		}

	output << "===================================" << std::endl;

	return output;            
}
				

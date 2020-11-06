/* Lista Duplamente Encadeada Circular */ 

#include<iostream>

#include "tadListaDupCirc.h"

// ******************************************************

cListaDupCirc::cListaDupCirc() { //funcionando
	inicio = NULL;
	fim = NULL;
	numElem = 0;
}

// ******************************************************

cListaDupCirc::cListaDupCirc(const cListaDupCirc &l) {
	if (this != &l)	{ //para não se auto copiar
       	cNo* novoNo = new cNo;
		cNo* noCorrente; //ponteiro pra percorrer a lista

		if (l.inicio == NULL) {
			inicio = NULL;
			fim = NULL;
			numElem = 0;
		}
		else{ //teste começa agr
			noCorrente = l.inicio; //noCorrente aponta pra listar a ser copiada
			numElem = l.numElem;
			inicio = new cNo(*l.inicio); //criar inicio da nova lista
	    	fim = inicio; //como só possui 1 elemento, fim e inicio são iguais
	    	//como só possui 1 elemento, aponta pra ele mesmo
	    	inicio->setProx(fim); 
	    	inicio->setAnte(fim);
			noCorrente = noCorrente->getProx(); //noCorrente vai apontar pro proximo elemento da lista a ser copiada
		
	    	//copia o resto da lista
	    	while (noCorrente != l.inicio){
	       		novoNo = new cNo(*noCorrente);
	       		novoNo->setAnte(fim);
	       		novoNo->setProx(inicio); //o novo fim aponta prox pro inicico, pois é circular
	      		fim->setProx(novoNo);
	       		fim = novoNo;
	       		inicio->setAnte(fim); //o inicio aponta ante pro fim, pois é circular
	       		noCorrente = noCorrente->getProx();
	       		
	    	}
		}
    }
}
// ******************************************************

cListaDupCirc::~cListaDupCirc() { //funcionando
	if(inicio != NULL){
		cNo* noCorrente = fim;
		while(inicio != fim){
			noCorrente->setProx(inicio->getProx());
			delete inicio;
			inicio = noCorrente->getProx();
			numElem--;
		}
		delete inicio;
		numElem--;
	}
}

// ******************************************************

bool cListaDupCirc::InsereElemInicio(int dado) { //funcionando
	cNo* noNovo = new cNo(dado);
	if(inicio == NULL){
		noNovo->setAnte(noNovo);
		noNovo->setProx(noNovo);
		inicio = noNovo;
		fim = noNovo;
	}
	else{
		noNovo->setProx(inicio);
		noNovo->setAnte(fim);
		inicio->setAnte(noNovo);
		inicio = noNovo;
		fim->setProx(inicio);
	}
	numElem++;
	return true;
}

// ******************************************************

bool cListaDupCirc::InsereElemFim(int dado) { //funcionando
	cNo* noNovo = new cNo(dado);
	if(inicio == NULL){
		noNovo->setAnte(noNovo);
		noNovo->setProx(noNovo);
		inicio = noNovo;
		fim = noNovo;
	}
	else{
		noNovo->setAnte(fim);
		noNovo->setProx(inicio);
		fim->setProx(noNovo);
		fim = noNovo;
		inicio->setAnte(fim);
	}
	numElem++;
	return true;
}	
	
// ******************************************************

bool cListaDupCirc::BuscaElem(int chave, cNo** no, cNo** noProx, cNo** noAnte) { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	/*
	else if(inicio->getDado() == chave){
		*no = inicio;
		*noProx = inicio->getProx();
		*noAnte = fim;
		return true;
	}
	*/
	cNo* noCorrente = inicio->getProx();
	while(noCorrente != inicio && noCorrente->getDado() != chave){ //enquanto o nó não for o inicio e nem seja o elemento buscado
		noCorrente = noCorrente->getProx();
	}
	if(noCorrente->getDado() == chave){
		*no = noCorrente;
		*noProx = noCorrente->getProx();
		*noAnte = noCorrente->getAnte();
		return true;
	}
	return false;
}

// ******************************************************

bool cListaDupCirc::RemoveElem(int dado)	{ //funcionando
	cNo* no;
	cNo* noProx;
	cNo* noAnte;
	if(BuscaElem(dado, &no, &noProx, &noAnte)){
		if(no == inicio)
			this->RemoveElemInicio();
		else if(no == fim)
			this->RemoveElemFim();
		else{
			noAnte->setProx(noProx);
			noProx->setAnte(noAnte);
			delete no;
		}
		numElem--;
		return true;
	}
	return false;
}

// ******************************************************

bool cListaDupCirc::RemoveElemInicio() { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	cNo* no = inicio;
	inicio = inicio->getProx();
	inicio->setAnte(fim);
	fim->setProx(inicio);
	numElem--;
	delete no;
	return true;
}

// ******************************************************

bool cListaDupCirc::RemoveElemFim() { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	cNo* no = fim;
	fim = fim->getAnte();
	fim->setProx(inicio);
	inicio->setAnte(fim);
	numElem--;
	delete no;
	return true;
}

// ******************************************************

void cListaDupCirc::ImprimirLista() { //funcionando
	std::cout << "\n\tLista Duplamente Encadeada Circular: " << std::endl;
	std::cout << "\t" << inicio->getDado() << std::endl;
	cNo* noCorrente = inicio->getProx();
	while(noCorrente != inicio){
		std::cout << "\t" << noCorrente->getDado() << std::endl;
		noCorrente = noCorrente->getProx();	
	}
	std::cout << std::endl;
}

// ******************************************************

int cListaDupCirc::tamanho() {
	return numElem;
}

// ******************************************************

cNo* cListaDupCirc::getInicio(){
	return inicio;
}

// ******************************************************

cNo* cListaDupCirc::getFim(){
	return fim;
}

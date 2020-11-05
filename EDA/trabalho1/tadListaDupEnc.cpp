/* Lista Duplamente Encadeada */ 

#include<iostream>

#include "tadListaDupEnc.h"

// ******************************************************

cListaDupEnc::cListaDupEnc() { //funcionando
	inicio = NULL;
	fim = NULL;
	numElem = 0;
}

// ******************************************************

cListaDupEnc::cListaDupEnc(const cListaDupEnc &l) {
	numElem = l.numElem;
	inicio 	= new cNo(*l.inicio);
	fim = new cNo(*l.fim);
	cNo* noProximo = l.inicio->getProx()->getProx();
	cNo* noCorrente = l.inicio->getProx();
	cNo* noAnterior = l.inicio;
	cNo* noCorrenteNovo = inicio;
	while(noCorrente != NULL){ //enquanto o proximo elemento da lista a ser copiada for diferente de null / só entra no looping caso a lista tiver mais de 1 elemento
		if(noCorrenteNovo == inicio){ //como o primeiro elemento não tem anterior, só usa o set no proximo
			cNo* noProx = new cNo(*noCorrente);
			noCorrenteNovo->setProx(noProx);
		}
		else{ //caso eu não esteja no primeiro elemento da lista nova
			cNo* noProx = new cNo(*noProximo);
			cNo* noAnte = new cNo(*noAnterior);
			noCorrenteNovo->setProx(noProx);
			noCorrenteNovo->setAnte(noAnte);
			noProximo = noProximo->getProx();
			noCorrente = noCorrente->getProx();
			noAnterior = noAnterior->getProx();
		}
		noCorrenteNovo = noCorrenteNovo->getProx();
		
	}
	fim = noCorrenteNovo->getAnte();
}	

// ******************************************************

cListaDupEnc::~cListaDupEnc() { //funcionando
	cNo* noCorrente = inicio;
	while( noCorrente != NULL ) {
    	cNo* noProx = noCorrente->getProx();
    	delete noCorrente;
    	noCorrente = noProx;
    	numElem--;
	}
	inicio = NULL;
}

// ******************************************************

bool cListaDupEnc::InsereElemInicio(int dado) { //funcionando
	cNo* noNovo = new cNo(dado);
	if(inicio == NULL){
		inicio = noNovo;
		fim = noNovo;
	}
	else{
		inicio->setAnte(noNovo);
		noNovo->setProx(inicio);
		inicio = noNovo;
	}
	numElem++;
	return true;
}

// ******************************************************

bool cListaDupEnc::InsereElemFim(int dado) { //funcionando
	cNo* noNovo = new cNo(dado);
	if(inicio == NULL){
		inicio = noNovo;
		fim = noNovo;
	}
	else{
		fim->setProx(noNovo);
		noNovo->setAnte(fim);
		fim = noNovo;
	}
	numElem++;
	return true;
}	
	
// ******************************************************

bool cListaDupEnc::BuscaElem(int chave, cNo** no, cNo** noProx, cNo** noAnte) { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	else if(inicio->getDado() == chave){
		*no = inicio;
		*noProx = inicio->getProx();
		*noAnte = NULL;
		return true;
	}
	else if(fim->getDado() == chave){
		*no = fim;
		*noProx = NULL;
		*noAnte = fim->getAnte();
		return true;
	}
	cNo* noCorrente = inicio->getProx();
	while(noCorrente->getProx() != NULL && noCorrente->getDado() != chave){
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

bool cListaDupEnc::RemoveElem(int dado)	{ //funcionando
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

bool cListaDupEnc::RemoveElemInicio() { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	cNo* no = inicio;
	inicio = inicio->getProx();
	inicio->setAnte();
	numElem--;
	delete no;
	return true;
}

// ******************************************************

bool cListaDupEnc::RemoveElemFim() { //funcionando
	if(inicio == NULL && fim == NULL)
		return false;
	cNo* no = fim;
	fim = fim->getAnte();
	fim->setProx();
	numElem--;
	delete no;
	return true;
}

// ******************************************************

void cListaDupEnc::ImprimirLista() { //funcionando
	std::cout << "Lista Duplamente Encadeada: " << std::endl;
	cNo* noCorrente = inicio;
	while(noCorrente != NULL){
		std::cout << "\t" << noCorrente->getDado() << std::endl;
		noCorrente = noCorrente->getProx();	
	}
}

// ******************************************************

int cListaDupEnc::tamanho() {
	return numElem;
}

// ******************************************************

cNo* cListaDupEnc::getInicio(){
	return inicio;
}

// ******************************************************

cNo* cListaDupEnc::getFim(){
	return fim;
}

	
	
	
	
	
	
	
	
	

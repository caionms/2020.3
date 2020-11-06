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
			noCorrente = noCorrente->getProx(); //noCorrente vai apontar pro proximo elemento da lista a ser copiada
		
	    	//copia o resto da lista
			while (noCorrente != NULL){
				novoNo = new cNo(*noCorrente);
				novoNo->setAnte(fim);
				fim->setProx(novoNo);
				fim = novoNo;
				numElem++;
				noCorrente = noCorrente->getProx();
			}	
	 	}
	}
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
	std::cout << "\n\tLista Duplamente Encadeada: " << std::endl;
	cNo* noCorrente = inicio;
	while(noCorrente != NULL){
		std::cout << "\t" << noCorrente->getDado() << std::endl;
		noCorrente = noCorrente->getProx();	
	}
	std::cout << std::endl;
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

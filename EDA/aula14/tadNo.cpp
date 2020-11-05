/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadNo.h"



// ******************************************************
// ***
// ******************************************************
cNo::cNo() { 
	dado = 0;
	prox = NULL;
}


// ******************************************************
// ***
// ******************************************************
cNo::cNo(int dado) {
	this->dado = dado;
	this->prox = NULL;
}

// ******************************************************
// ***
// ******************************************************
cNo::cNo(const cNo &n) {
	dado = n.dado;
	prox = NULL;
}

// ******************************************************
// ***
// ******************************************************
cNo::~cNo() {

}

// ******************************************************
// ***
// ******************************************************
void cNo::setDado(int d) {

	dado = d;
}

// ******************************************************
// ***
// ******************************************************
void cNo::setProx(cNo* p) {

	prox = p;

}

// ******************************************************
// ***
// ******************************************************
int  cNo::getDado(){

	return dado;

}

// ******************************************************
// ***
// ******************************************************
cNo*  cNo::getProx() {

	return prox;

}

// ******************************************************
// ***
// ******************************************************
std::ostream &operator<<( std::ostream &output, const cNo &n ) { 

	output << "=====+=====" << std::endl;
	output << "|  " << n.dado << " |  " << n.prox << " | " << std::endl;
	output << "=====+=====" << std::endl;

	return output;            
}
				
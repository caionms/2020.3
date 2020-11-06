/* No da Lista Duplamente Encadeada */ 

#include <iostream>

#include "tadNoDup.h"

// ******************************************************

cNo::cNo() {
	dado = 0;
	prox = NULL;
	ante = NULL;
}

// ******************************************************

cNo::cNo(int dado) {
	this->dado = dado;
	this->prox = NULL;
	this->ante = NULL;
}

// ******************************************************

cNo::cNo(const cNo &n) {
	dado = n.dado;
	prox = NULL;
	ante = NULL;
}

// ******************************************************

cNo::~cNo() {
	
}

// ******************************************************

void cNo::setDado(int d) {
	dado = d;
}

// ******************************************************

void cNo::setProx(cNo* p) {
	prox = p;
}

// ******************************************************

void cNo::setProx() { //para ajudar na remoção do ultimo elemento
	prox = NULL;
}

// ******************************************************

void cNo::setAnte(cNo* a) {
	ante = a;
}

// ******************************************************

void cNo::setAnte() { //para ajudar na remoção do primeiro elemento
	ante = NULL;
}

// ******************************************************

int  cNo::getDado(){
	return dado;
}

// ******************************************************

cNo*  cNo::getProx() {
	return prox;
}

// ******************************************************

cNo*  cNo::getAnte() {
	return ante;
}

// ******************************************************
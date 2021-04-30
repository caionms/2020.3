/* No da Quad Tree */ 

#include <iostream>

#include "cNo.h"
#include "cPoint.h"

// ******************************************************
/*
cNo::cNo() {
		P0 = cPoint(0.0,0.0); //ponto incial
		P1 = cPoint(1.0,1.0); //ponto final
		FSE = NULL; //filho superior esquerdo
       	FSD = NULL; //filho superior direito
        FIE = NULL; //filho inferior esquerdo
        FID = NULL; //filho inferior direito
        leaf = true; //bool para saber se é folha ou não
        level = 0; //nivel da arvore - começa do 0
}
*/
// ******************************************************

cNo::cNo(float p0x, float p0y, float p1x, float p1y, int level) {
	this->P0 = cPoint(p0x, p0y);
	this->P1 = cPoint(p1x, p1y);
	this->FSE = NULL; //filho superior esquerdo
    this->FSD = NULL; //filho superior direito
    this->FIE = NULL; //filho inferior esquerdo
    this->FID = NULL; //filho inferior direito
    this->level = level+1;
}

// ******************************************************

cNo::cNo(cPoint P0, cPoint P1, int level) {
	this->P0 = P0;
	this->P1 = P1;
	this->FSE = NULL; //filho superior esquerdo
    this->FSD = NULL; //filho superior direito
    this->FIE = NULL; //filho inferior esquerdo
    this->FID = NULL; //filho inferior direito
    this->level = level+1;
}

// ******************************************************

cNo::cNo(const cNo &n) {
	this->P0 = n.P0;
	this->P1 = n.P1;
	this->FSE = n.FSE; //filho superior esquerdo
    this->FSD = n.FSD; //filho superior direito
    this->FIE = n.FIE; //filho inferior esquerdo
    this->FID = n.FID; //filho inferior direito
    this->level = n.level;
}

// ******************************************************

cNo::~cNo() {
	
}

// ******************************************************

void cNo::setP0(float p0x, float p0y) {
	this->P0 = cPoint(p0x, p0y);
}

// ******************************************************

void cNo::setP0(cPoint P0) {
	this->P0 = P0;
}

// ******************************************************

void cNo::setP1(float p1x, float p1y) {
	this->P1 = cPoint(p1x, p1y);
}

// ******************************************************

void cNo::setP1(cPoint P1) {
	this->P1 = P1;
}

// ******************************************************

void cNo::setFSE(cNo* p) {
	this->FSE = p;
}

// ******************************************************

void cNo::setFSD(cNo* p) {
	this->FSD = p;
}

// ******************************************************

void cNo::setFIE(cNo* p) {
	this->FIE = p;
}

// ******************************************************

void cNo::setFID(cNo* p) {
	this->FID = p;
}

// ******************************************************

void cNo::setLeaf(bool leaf) {
	this->leaf = leaf;
}

// ******************************************************

void cNo::setLevel(int level) {
	this->level = level;
}

// ******************************************************

cPoint cNo::getP0(){
	return P0;
}

// ******************************************************

cPoint cNo::getP1(){
	return P1;
}

// ******************************************************

cNo*  cNo::getFSE() {
	return FSE;
}

// ******************************************************

cNo*  cNo::getFSD() {
	return FSD;
}

// ******************************************************

cNo*  cNo::getFIE() {
	return FIE;
}

// ******************************************************

cNo*  cNo::getFID() {
	return FID;
}

// ******************************************************

bool cNo::getLeaf(){
	return leaf;
}

// ******************************************************

int cNo::getLevel(){
	return level;
}

// ******************************************************

/* No da Quad Tree */ 
#pragma once

#include<iostream>
#include "cPoint.h"


class cNo {
	private:
		cPoint P0; //ponto incial
		cPoint P1; //ponto final
		cNo* FSE; //filho superior esquerdo
		cNo* FSD; //filho superior direito
		cNo* FIE; //filho inferior esquerdo
		cNo* FID; //filho inferior direito
		bool leaf; //bool para saber se é folha ou não ---- Lembrar de colocar na função de dividir de mudar para false
		int level; //nivel da arvore - começa do 0 e vai ter limite 6
		
	public:
		//cNo(); //necessariot ter um construtor sem passar coordenadas?
		cNo(float p0x, float p0y, float p1x, float p1y, int level);
		cNo(cPoint P0, cPoint P1, int level);
		cNo(const cNo &n);
		~cNo();
		
		void setP0(float p0x, float p0y);
		void setP0(cPoint P0);
		void setP1(float p1x, float p1y);
		void setP1(cPoint P1);
		void setFSE(cNo* p);
		void setFSD(cNo* p);
		void setFIE(cNo* p);
		void setFID(cNo* p);
		void setLeaf(bool leaf);
		void setLevel(int level);
		
		cPoint getP0();
		cPoint getP1();
		cNo* getFSE();
		cNo* getFSD();
		cNo* getFIE();
		cNo* getFID();
		bool getLeaf();
		int getLevel();
};

/* Tipos Abstratos e Registros */ 

#include<iostream>

#include "tadData.h"

		void cData::setDia(int v){
			if((v<1) or (v > 31))
				dia = 1; //padrão
			else
				dia = v;
		}
		void cData::setMes(int v){
			if((v<1) or (v > 12))
				mes = 1;
			else
				mes = v;
		}
		void cData::setAno(int v){
			ano = v;
		}
		int cData::getDia(){
			return dia;
		}
		int cData::getMes(){
			return mes;
		}
		int cData::getAno(){
			return ano;
		}
		

// ******************************************************
// ***
// ******************************************************

				

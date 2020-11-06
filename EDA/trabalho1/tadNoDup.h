/* No da Lista Duplamente Encadeada */ 
#pragma once

#include<iostream>

class cNo {
	private:
		int dado;
		cNo* prox;
		cNo* ante;
		
	public:
		cNo();
		cNo(int dado);
		cNo(const cNo &n);
		~cNo();
		
		void setDado(int d);
		void setProx(cNo* p);
		void setProx();
		void setAnte(cNo* a);
		void setAnte();
		int getDado();
		cNo* getProx();
		cNo* getAnte();
		
};
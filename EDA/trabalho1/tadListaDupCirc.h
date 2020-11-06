/* Lista Duplamente Encadeada */ 

#include<iostream>

#include "tadNoDup.h"

class cListaDupCirc {
	private:
		int numElem;
		cNo* inicio;
		cNo* fim;
		
	public:
		cListaDupCirc();
		cListaDupCirc(const cListaDupCirc &l);
		~cListaDupCirc();
		bool InsereElemInicio(int dado);
		bool InsereElemFim(int dado);
		bool BuscaElem(int chave, cNo** no, cNo** noProx, cNo** noAnte);
		bool RemoveElem(int dado);
		bool RemoveElemInicio();
		bool RemoveElemFim();
		void ImprimirLista();
		int tamanho();
		cNo* getInicio();
		cNo* getFim();
};
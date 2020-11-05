/* Lista Duplamente Encadeada */ 

#include<iostream>

#include "tadNoDup.h"

class cListaDupEnc {
	private:
		int numElem;
		cNo* inicio;
		cNo* fim;
		
	public:
		cListaDupEnc();
		cListaDupEnc(const cListaDupEnc &l);
		~cListaDupEnc();
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

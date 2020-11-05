/* Classe data */ 

#include<iostream>

#include "tadNo.h"

class cListaEncDin	{ 

	private:
		cNo* inicio;		    // nó inicial
  		int  numNos;   			// Total de posicoes alocadas
		
		cNo* buscaUltimoNo();

	public:	
		cListaEncDin();

		cListaEncDin(int tam);

		cListaEncDin(const cListaEncDin &v);

		~cListaEncDin();

		bool InsereElem(int dado);

		bool BuscaElem(int dado, int& pos);

		bool BuscaElem(int dado, int& pos, int& ant);

		bool RemoveElem(int dado);

		int posicoesLivres();

		int tamanho();

		void printVetor();

		friend std::ostream &operator<<( std::ostream &output, const cListaEncDin &v);
};


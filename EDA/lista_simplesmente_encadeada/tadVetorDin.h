/* Classe data */ 

#include<iostream>

class cVetorDin	{ 

	private:
		int*  vet;		 // espaço de memoria alocado dinamicamente
		int   numElem;   // Total de posicoes alocadas
		bool* vetLivre;	 // vetor que indica se a posição no vetor principal está livre ou não

	public:	
		cVetorDin();

		cVetorDin(int tam);

		cVetorDin(const cVetorDin &v);

		~cVetorDin();

		bool InsereElem(int dado);

		bool BuscaElem(int dado, int& pos);

		bool RemoveElem(int dado);

		bool TesteLivre() const; //declarado como constante para resolver problema com o fstream
		
		int PosicaoLivre();

		int tamanho();

		friend std::ostream &operator<<( std::ostream &output, const cVetorDin &v);

		friend std::istream &operator>>( std::istream  &input, cVetorDin &v);
};


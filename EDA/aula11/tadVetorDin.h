/* Classe data */ 

#include<iostream>

class cVetorDin	{ 

	private:
		int* vet; //criação de um vetor dinâmico
		int  numElem; //qtd de elementos no vetor
		int  ultPos; //última posição no veetor

	public:	
		cVetorDin(); //construtor sem informação

		cVetorDin(int tam); //construtor com tamanho

		cVetorDin(const cVetorDin &v); //construtor com outro vetor de referencia

		~cVetorDin(); //destrutor

		bool InsereElem(int dado);

		bool BuscaElem(int dado, int& pos);

		bool RemoveElem(int dado);

		int posicoesLives();

		int tamanho();

		friend std::ostream &operator<<( std::ostream &output, const cVetorDin &v);

		friend std::istream &operator>>( std::istream  &input, cVetorDin &v );
};


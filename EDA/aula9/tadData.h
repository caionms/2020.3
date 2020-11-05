/* Classe data */ 

#include<iostream>


//class cData	{ 
//	public: //qualquer acesso pode manipular os dados
//		int dia;
//		int mes;
//		int ano;
//	private:
//		int numDias;
//};

class cData	{ 
	private:
		int dia;
		int mes;
		int ano;
		int numDias;
	public:
//		void setDia(int v){
//			dia = v;
//		}
//		void setMes(int v){
//			mes = v;
//		}
//		void setAno(int v){
//			ano = v;
//		}
//		int getDia(){
//			return dia;
//		}
//		int getMes(){
//			return mes;
//		}
//		int getAno(){
//			return ano;
//		}
		cData(){//construtor
			std::cout << "Construtor" << std::endl;
		};
		cData(int d, int m, int a){
			dia = d;
			mes = m;
			ano = a;
		};
		~cData() {std::cout << "Destrutor" << std::endl;
		};
		void setDia(int v);
		void setMes(int v);
		void setAno(int v);
		int getDia();
		int getMes();
		int getAno();
};


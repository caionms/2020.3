#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "geradorPlaca.h"

using namespace std;

void gerarPlaca(ofstream& arquivo, int qtd){ //função pra gerar placas no formato do mercosul
	int ascii;
	char c;
	for(int i=0;i<qtd;i++){ //loop com a qntd de placas
		string aux = "";
		for(int u=0;u<3;u++){
			ascii = rand() % 25 + 65; //código ascii para as letras do alfabeto
			c = char(ascii);
			aux = aux+c;
		}
		ascii = rand() % 10 + 48; //código ascii para as os números de 0 a 9
			c = char(ascii);
		c = char(ascii);
		aux = aux+c;
		ascii = rand() % 25 + 65; //código ascii para as letras do alfabeto
			c = char(ascii);
		c = char(ascii);
		aux = aux+c;
		for(int u=0;u<2;u++){
			ascii = rand() % 10 + 48; //código ascii para as os números de 0 a 9
			c = char(ascii);
			aux = aux+c;
		}
		arquivo << aux << endl;	//guarda uma placa por linha no arquivo de texto
	}
}
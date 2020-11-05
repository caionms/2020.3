#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "geradorPlaca.h"

#define COMP 7

using namespace std;
	
void radix(vector<string>& valores){//radix sort ou lsd sort
    int comprimento = COMP; //tamanho das strings (placas)
    int n = valores.size(); //quantidade de placas
    vector<string> buffer(n);
    vector<string> *in = &valores;
    vector<string> *out = &buffer;
    int R = 256; // quantidade de digitos
    for(int i = comprimento-1; i >= 0; i--){
        vector<int> freq(R+1);
        for(int j = 0; j < n; j++)
            ++freq[(*in)[j][i]+1];
        for(int k = 1; k <= R; ++k)
            freq[k] += freq[k-1];
        for(int j = 0; j < n; ++j)
            (*out)[freq[(*in)[j][i]]++] = move((*in)[j]);
        swap(in, out);
    }

    if(comprimento % 2 == 1){
        for(int j = 0; j < n; ++j){
            (*out)[j] = move((*in)[j]);
        }
    }
}

int main(){
	int qtd;
	string entrada = "";
	vector<string> v;
	ofstream gravarEntrada("Placas.txt"); //cria um arquivo para escrita de texto onde irei guardar as placas geradas
	cout << "Insira a quantidade de placas a serem geradas: " << endl;
	cin >> qtd;
	gerarPlaca(gravarEntrada, qtd); //chamada da função para gerar placas
	ifstream lerEntrada("Placas.txt"); //função para tornar o arquivo onde as placas estão guardadas legível pelo programa
	cout << "As placas são: " << endl;
	while (getline (lerEntrada, entrada)) { //faz a leitura de cada linha do arquivo de texto
		cout << "\t" << entrada << endl;
		v.push_back(entrada);
	}
	radix(v); //chamada do Radix Sort para ordenar os elementos do vetor
	cout << "As placas ordenadas são: " << endl;
	for(int i=0;i<qtd;i++){
		cout << "\t" << v[i] << endl;
	}
	gravarEntrada.close(); //fecha o arquivo de escrita
	lerEntrada.close(); //fecha o arquivo de leitura
	return 0;
}
#include <iostream>
#include <string>
#include <vector>

#define COMP 7

using namespace std;

void gerarPlaca(vector<string>& placas, int qtd){ //função pra gerar placas no formato do mercosul
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
		placas.push_back(aux);
	}
}
		
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
	int qtd,menor = 0;
	string entrada = "teste";
	vector<string> v;
	cout << "Insira a quantidade de placas a serem geradas: " << endl;
	cin >> qtd;
	gerarPlaca(v, qtd); //chamada da função para gerar placas
	cout << "As placas são: " << endl;
	for(int i=0;i<v.size();i++){
		cout << "\t" << v[i] << endl;
	}
	radix(v); //chamada do Radix Sort para ordenar os elementos do vetor
	cout << "As placas ordenadas são: " << endl;
	for(int i=0;i<v.size();i++){
		cout << "\t" << v[i] << endl;
	}
	return 0;
}

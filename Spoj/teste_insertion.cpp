#include <iostream>

using namespace std;

void mensagem(int v[]){
	cout << "Vetor: ";
	for(int u=0;u<4;u++){
		cout << v[u] << " ";
	}
	cout << endl;
	return;
}

void insertion_crescente(int v[], int tamanho){
	int aux, menor=0;
	for(int i=0;i<tamanho-1;i++){
		menor = i;
		for(int j=i+1;j<tamanho;j++){
			if(v[j]<v[menor])
				menor = j;
		}
		aux = v[i];
		v[i] = v[menor];
		v[menor] = aux;
	}
	mensagem(v);
	return;
}

void insertion_decrescente(int v[], int tamanho){
	int aux, maior=0;
	for(int i=0;i<tamanho-1;i++){
		maior = i;
		for(int j=i+1;j<tamanho;j++){
			if(v[j]>v[maior])
				maior = j;
		}
		aux = v[i];
		v[i] = v[maior];
		v[maior] = aux;
	}
	mensagem(v);
	return;
}

int main(){
	int n=4;
	int v[n]={4,1,3,2};
	mensagem(v);
	insertion_crescente(v,n);
	insertion_decrescente(v,n);
	return 0;
}

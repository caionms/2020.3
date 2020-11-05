#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>

#define MAX 20

using namespace std;

int comp = 0;

// ********************************************************************
// ** Funcao que promove uma busca sequencial em um vetor de N elementos
// ********************************************************************
bool buscaSeq(vector<int> v, int k) {
	for(int i=0;i<v.size();i++){
		comp++;
		if(v[i] == k) 
			return true;
	}
    return false;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************

bool binary_search(vector<int> v, int k){
	int inicio = 0;
	int fim = v.size()-1;
	int meio;
	while(inicio <= fim){
		meio = (inicio + fim)/2;
		comp++;
		if(v[meio] == k)
			return true;
		comp++;
		if(v[meio] > k)
			fim = meio - 1;
		else
			inicio = meio + 1;
	}
	return false;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************

int main() {

	vector<int> v;
	vector<int> vcompseq;
	vector<int> vbb;

	cout << "Tamanho do vetor: " << v.size() << endl;

    srand ( time(NULL) );

    for (unsigned int i=0; i < MAX; i++)
        v.push_back(rand() % MAX*100);
        
   // cout << "conteudo de v: ";
   // for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
   //    cout << ' ' << *it << endl;
//*********************************************************
	cout << "Na busca sequencial: " << endl;
	for(int i=0;i<v.size();i++){
		int k = rand() % v.size()*100;
		if(buscaSeq(v, k)) cout << "	Chave " << k << " presente no vetor." << endl;
		else cout << "	Chave " << k << " ausente no vetor." << endl;
		vcompseq.push_back(comp);
		comp = 0;
    }
    sort(vcompseq.begin(),vcompseq.end());
    cout << "	Melhor Caso: " << vcompseq[0] << endl;
    cout << "	Pior Caso: " << vcompseq[vcompseq.size()-1] << endl;
    cout << "	Caso Médio: " << vcompseq[vcompseq.size()/2] << endl;
//****************************************************
	comp = 0;
	sort(v.begin(),v.end());
	cout << "Na busca binária: " << endl;
	for(int i=0;i<v.size();i++){
		int k = rand() % v.size()*100;
		if(binary_search(v, k)) cout << "	Chave " << k << " presente no vetor." << endl;
		else cout << "	Chave " << k << " ausente no vetor." << endl;
		vbb.push_back(comp);
		comp = 0;
	}
	sort(vbb.begin(),vbb.end());
    cout << "	Melhor Caso: " << vbb[0] << endl;
    cout << "	Pior Caso: " << vbb[vbb.size()-1] << endl;
    cout << "	Caso Médio: " << vbb[vbb.size()/2] << endl;
 	return 0;        
}

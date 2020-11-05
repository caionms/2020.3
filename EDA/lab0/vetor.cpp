#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <cmath>

#define MAX 1000
#define REP 10

using namespace std;

int comp1 = 0;
int	comp2 = 0;
int	comp3 = 0;
int media;//calcular média

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Primeira versão.
// ********************************************************************
void minMaxVetor1(vector<int> v, int *max, int *min) {
	int n = v.size();
	*max = v[0];
	*min = v[0];
	for(int i=1;i<n;i++){
		comp1+=2;
		if(*max < v[i])
			*max = v[i];
		if(*min > v[i])
			*min = v[i];
	}
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Segunda versão.
// ********************************************************************
void minMaxVetor2(vector<int> v, int *max, int *min) {
	int n = v.size();
	*max = v[0];
	*min = v[0];
	media = v[0];//calcular média
	for(int i=1;i<n;i++){
		media += v[i];//calcular média
		comp2++;
		if(*max < v[i])
			*max = v[i];
		else{
			comp2++;
			if(*min > v[i])
				*min = v[i];
		}
	}
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Terceira versão.
// ********************************************************************
void minMaxVetor3(vector<int> v, int *max, int *min) {
	int i, FimDoAnel, n = v.size();
	comp3++;
	if(n > 0){
		v[n] = v[n-1];
		FimDoAnel = n;
	}
	else
		FimDoAnel = n-1;
	comp3++;
	if(v[0] > v[1]){
		*max = v[0];
		*min = v[1];
	}
	else{
		*max = v[1];
		*min = v[0];
	}
	i=3;
	while(i <= FimDoAnel){
		comp3++;
		if(v[i-1] > v[i]){
			comp3++;
			if(v[i-1] > *max)
				*max = v[i-1];
			comp3++;
			if(v[i] < *min)
				*min = v[i];
		}
		else{
			comp3++;
			if(v[i-1] < *min)
				*min = v[i-1];
			comp3++;
			if(v[i] > *max)
				*max = v[i];
		}
		i+=2;
	}		
}

// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {
	vector<int> v;
	vector<int> vcomp;
	vector<int> vcomp1;
	vector<int> vcomp2;
	vector<int> vcomp3;
	int escolha;
    srand ( time(NULL) );
    for (unsigned int i=0; i < MAX; i++)
        v.push_back(rand() % numeric_limits<int>::max());
	cout << "Digite 1,2 ou 3 para um dos 3 algoritmos: " << endl << "Digite 4 para os 3 algoritimos: " << endl << "Digite 5 para repetir os programas várias vezes com análise do número de comparações: " << endl;
	cin >> escolha;
	cout << "Tamanho do vetor = " << v.size() << endl;	
// ********************************************************************
	int max;
	int min;
	if(escolha == 5){
		for(int u=0;u<REP;u++){ //repetições do último caso
			if(u!=0){
				for (unsigned int i=0; i < MAX; i++) { //limpando e preenchendo o vetor
       				v.push_back(rand() % numeric_limits<int>::max());
       				v.erase(v.begin());
       			}
			}
			comp1 = 0;
			comp2 = 0;
			comp3 = 0;
			minMaxVetor1(v, &max, &min);
			cout << "No algoritimo 1: " << endl << "	O maior elemento é: " << max << endl << "	O menor elemento é: " << min << endl << "	E número de comparações foi: " << comp1 << endl;
			vcomp.push_back(comp1);
			vcomp1.push_back(comp1);
			minMaxVetor2(v, &max, &min);
			cout << "No algoritimo 2: " << endl << "	O maior elemento é: " << max << endl << "x	O menor elemento é: " << min << endl << "	E o número de comparações foi: " << comp2 << endl;
			vcomp.push_back(comp2);
			vcomp2.push_back(comp2);
			minMaxVetor3(v, &max, &min);
			cout << "No algoritimo 3: " << endl << "	O maior elemento é: " << max << endl << "	O menor elemento é: " << min << endl << "	E o número de comparações foi: " << comp3 << endl;
			vcomp.push_back(comp3);
			vcomp3.push_back(comp3);
		}
		cout << "*****************************************************" << endl;
		/////////////////////////////////////////////////////////Geral
		int maximo;//maximo de comparações
		int minimo;//minimo de comparações
		int va;//calcular valor médio por desvio padrão
		int variacoes = 0;//calcular valor médio por desvio padrão
		media = 0;//calcular média
		minMaxVetor2(vcomp, &maximo, &minimo);
		media = media / vcomp.size();
		for(int w=0;w<vcomp.size();w++){//calcular valor médio por desvio padrão
			va = vcomp[w] - media;
			variacoes += va * va;
		}
		int sigma = sqrt(variacoes / vcomp.size());//calcular valor médio por desvio padrão
		cout << "Geral: " << endl << "	O número máximo de comparações foi: " << maximo << endl << "	O número mínimo de comparações foi: " << minimo << endl << "	O desvio padrão do número de comparações foi: " << sigma << endl;
		///////////////////////////////////////////////////////// Algo 1
		variacoes = 0;
		media = 0;
		minMaxVetor2(vcomp1, &maximo, &minimo);
		media = media / vcomp1.size();
		for(int w=0;w<vcomp1.size();w++){//calcular valor médio por desvio padrão
			va = vcomp1[w] - media;
			variacoes += va * va;
		}
		sigma = sqrt(variacoes / vcomp1.size());//calcular valor médio por desvio padrão
		cout << "Algoritmo 1: " << endl << "	O número máximo de comparações foi: " << maximo << endl << "	O número mínimo de comparações foi: " << minimo << endl << "	O desvio padrão do número de comparações foi: " << sigma << endl;
		/////////////////////////////////////////////////////////Algo 2
		variacoes = 0;
		media = 0;
		minMaxVetor2(vcomp2, &maximo, &minimo);
		media = media / vcomp2.size();
		for(int w=0;w<vcomp2.size();w++){//calcular valor médio por desvio padrão
			va = vcomp2[w] - media;
			variacoes += va * va;
		}
		sigma = sqrt(variacoes / vcomp2.size());//calcular valor médio por desvio padrão
		cout << "Algoritmo 2: " << endl << "	O número máximo de comparações foi: " << maximo << endl << "	O número mínimo de comparações foi: " << minimo << endl << "	O desvio padrão do número de comparações foi: " << sigma << endl;
		/////////////////////////////////////////////////////////Algo 3
		variacoes = 0;
		media = 0;
		minMaxVetor2(vcomp3, &maximo, &minimo);
		media = media / vcomp3.size();
		for(int w=0;w<vcomp3.size();w++){//calcular valor médio por desvio padrão
			va = vcomp3[w] - media;
			variacoes += va * va;
		}
		sigma = sqrt(variacoes / vcomp3.size());//calcular valor médio por desvio padrão
		cout << "Algoritmo 3: " << endl << "	O número máximo de comparações foi: " << maximo << endl << "	O número mínimo de comparações foi: " << minimo << endl << "	O desvio padrão do número de comparações foi: " << sigma << endl;
		return 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////
	else if(escolha == 4){
		minMaxVetor1(v, &max, &min);
		cout << "No algoritimo 1: " << endl << "	O maior elemento é: " << max << endl << "	O menor elemento é: " << min << endl << "	E o número de comparações foi: " << comp1 << endl;
		minMaxVetor2(v, &max, &min);
		cout << "No algoritimo 2: " << endl << "	O maior elemento é: " << max << endl << "	O menor elemento é: " << min << endl << "	E o número de comparações foi: " << comp2 << endl;
		minMaxVetor3(v, &max, &min);
		cout << "No algoritimo 3: " << endl << "	O maior elemento é: " << max << endl << "	O menor elemento é: " << min << endl << "	E o número de comparações foi: " << comp3 << endl;
		return 0;
	}
	else if(escolha == 1){
		minMaxVetor1(v, &max, &min);
		cout << "O número de comparações foi: " << comp1 << endl;
	}
	else if(escolha == 2){
		minMaxVetor2(v, &max, &min);
		cout << "O número de comparações foi: " << comp2 << endl;
	}
	else{
		minMaxVetor3(v, &max, &min);
		cout << "O número de comparações foi: " << comp3 << endl;
	}
	cout << "O maior elemento é: " << max << endl << "O menor elemento é: " << min << endl;
 	return 0;        
}














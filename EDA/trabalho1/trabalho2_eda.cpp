#include <iostream>
#include <fstream>
#include <typeinfo>
#include <string>
#include <sstream>

#include "tadListaDupEnc.h"
#include "tadListaDupCirc.h"

using namespace std;

int main(int argc, char *argv[]){
 	string filename, entrada = "";
 	int numero = 0,aux;
	if (argc < 2){
        	printf("Faltando o arquivo de texto\n");
        	return 0;
   	}
   	 else{
        filename = argv[1];
        cout << "Nome do Arquivo: " << filename << endl;
   	}
   	ifstream LerArquivo(filename);
   	cListaDupEnc LDE;
	cListaDupCirc LDC;
	while (getline (LerArquivo, entrada)){
		stringstream geek(entrada); //transformar a string da linha em inteiro
		geek >> numero;
		if(LDE.InsereElemFim(numero))
			cout << "Numero " << numero << " inserido no fim da Lista Duplamente Encadeada." << endl;
		else
			cout << "Numero " << numero << " nao inserido na Lista Duplamente Encadeada." << endl;
		if(LDC.InsereElemInicio(numero))
			cout << "Numero " << numero << " inserido no inicio da Lista Duplamente Encadeada Circular." << endl;
		else
			cout << "Numero " << numero << " nao inserido na Lista Duplamente Encadeada Circular." << endl;
	}
	LDE.ImprimirLista();
	LDC.ImprimirLista();
	if(LDE.RemoveElemFim())
			cout << "Removido o último elemento da Lista Duplamente Encadeada" << endl;
		else
			cout << "Não foi possível remover o último elemento da Lista Duplamente Encadeada" << endl;
	if(LDC.RemoveElemInicio())
			cout << "Removido primeiro elemento da Lista Duplamente Encadeada Circular." << endl;
		else
			cout << "Não foi possível remover o primeiro elemento da Lista Duplamente Encadeada Circular." << endl;
	LDE.ImprimirLista();
	LDC.ImprimirLista();
	if(LDE.RemoveElemInicio())
			cout << "Removido o primeiro elemento da Lista Duplamente Encadeada" << endl;
		else
			cout << "Não foi possível remover o primeiro elemento da Lista Duplamente Encadeada" << endl;
	if(LDC.RemoveElemFim())
			cout << "Removido o último elemento da Lista Duplamente Encadeada Circular." << endl;
		else
			cout << "Não foi possível remover o último elemento da Lista Duplamente Encadeada Circular." << endl;
	LDE.ImprimirLista();
	LDC.ImprimirLista();
	cout << "Agora insira um valor para ser removido da Lista Duplamente Encadeada: " << endl;
	cin >> aux;
	if(LDE.RemoveElem(aux))
		cout << aux << " removido da Lista Duplamente Encadeada." << endl;
	else
		cout << "Valor não encontrado." << endl;
	cout << "Agora insira um valor para ser removido da Lista Duplamente Encadeada Circular: " << endl;
	cin >> aux;
	if(LDC.RemoveElem(aux))
		cout << aux << " removido da Lista Duplamente Encadeada Circular." << endl;
	else
		cout << "Valor não encontrado." << endl;
	LDE.ImprimirLista();
	LDC.ImprimirLista();
	cout << "Agora insira um valor para ser adicionado no inicio da Lista Duplamente Encadeada: " << endl;
	cin >> aux;
	if(LDE.InsereElemInicio(aux))
		cout << aux << " adicionado no inicio da Lista Duplamente Encadeada." << endl;
	else
		cout << "Não foi possivel adicionar." << endl;
	cout << "Agora insira um valor para ser adicionado no fim da Lista Duplamente Encadeada Circular: " << endl;
	cin >> aux;
	if(LDC.InsereElemFim(aux))
		cout << aux << " adicionado no fim da Lista Duplamente Encadeada Circular." << endl;
	else
		cout << "Não foi possivel adicionar." << endl;
	LDE.ImprimirLista();
	LDC.ImprimirLista();
	return 0;
}
	

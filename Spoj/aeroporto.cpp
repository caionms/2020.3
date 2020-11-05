#include <iostream>
using namespace std;

int main(){
	int a,v,x,y,maior;
	for(int u=1; ;u++){
		cin >> a >> v;
		if(a==0 && v==0) return 0;
		int vet[a]={};
		for(int i=0;i<a;i++){
			vet[i]=0;
		}
		for(int i=0;i<v;i++){
			cin >> x >> y;
			vet[x-1]++;
			vet[y-1]++;
		}
		cout << "Teste " << u << endl;
		maior = vet[0];
		for(int i=0;i<a;i++)
			if(vet[i] > maior) maior = vet[i];
		for(int i=0;i<a;i++){
			if(vet[i] == maior) cout << i+1 << " ";
		}
		cout << endl << endl;
	}
	return 0;
}

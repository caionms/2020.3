#include <iostream>
using namespace std;

int main(){
	int n,p,pags;
	while(true){
		int aux=0;
		cin >> n >> p;
		if(n==0 && p==0) break;
		aux = n/p;
		cout << "Poo";
		if(n/p>6 || (n/p==6)&&(n%p!=0)){
			if(n/p >= 20){
				cout << "oooooooooooooo";
			}
			else{
				for(int i=0;i<(n/p)-6;i++){
					cout << "o";
				}
				if(n%p!=0) cout << "o";
			}
		}
		cout << "dle" << endl;
	}
	return 0;
}


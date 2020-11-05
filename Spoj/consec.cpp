#include <iostream>
using namespace std;

int main(){
	int n,v,aux,taux=1,total=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v;
		if(i!=0){
			if(v==aux) 
				taux++;
			else{
				if(taux > total) total = taux;
				taux=1;
			}
		}
		aux = v;
	}
	if(taux > total) total = taux;
	cout << total << endl;
	return 0;
}

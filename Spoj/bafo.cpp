#include <iostream>
using namespace std;

int main(){
	int a,b,r;
	for(int u=1; ;u++){
		cin >> r;
		int aldo=0,beto=0;
		if(r==0) break;
		for(int i=0;i<r;i++){
			cin >> a >> b;
			aldo+=a;
			beto+=b;
		}
		cout << "Teste " << u << endl;
		if(beto>aldo) cout << "Beto" << endl;
		else cout << "Aldo" << endl;
	}
	return 0;
}

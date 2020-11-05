#include <iostream>
using namespace std;

int main(){
	int a,b,c,trigo,ovos,leite;
	cin >> a >> b >> c;
	trigo = a/2;
	ovos = b/3;
	leite = c/5;
	if(trigo<=ovos && trigo<=leite) cout << trigo << endl;
	else if(ovos<=trigo && ovos<=leite) cout << ovos << endl;
	else cout << leite << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int n,j,z;
	for(int i=1; ;i++){
		int total=0;
		cin >> n;
		if(n==0) break;
		cout << "Teste " << i << endl;
		for(int u=0;u<n;u++){
			cin >> j >> z;
			total += j-z;
			cout << total << endl;
		}
		cout << endl;
	}
	return 0;
}

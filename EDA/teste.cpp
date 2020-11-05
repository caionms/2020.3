#include <iostream>

using namespace std;

int main(){
char v[3][4] = {};
for(int i=0;i<3;i++){
	for(int u=0;u<4;u++){
		char x;
		cin >> x;
		v[i][u] = x;
	}
}
for(int i=0;i<3;i++){
	for(int u=0;u<4;u++){
		cout << v[i][u];
	}
	cout << endl;
}
return 0;
}

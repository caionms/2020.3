#include <iostream>
using namespace std;

int main(){
	int casa, total=7;
	cin >> casa;
	if(casa <= 10){
		cout << "7" << endl;
		return 0; 
	}
	else if(casa <= 30){
		total += casa - 10;
	}
	else if(casa <= 100){
		total += 20 + (casa - 30)*2;
	}
	else{
		total += 160 + (casa - 100)*5	;
	}
	cout << total << endl;
	return 0;
}
	

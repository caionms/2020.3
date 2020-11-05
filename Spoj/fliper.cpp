#include <iostream>
using namespace std;

int main(){
	bool p,r;
	cin >> p >> r;
	if(p == false) cout << "C" << endl;
	else{
		if(r == false) cout << "B" << endl;
		else cout << "A" << endl;
	}
	return 0;
}

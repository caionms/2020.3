#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

class cMinHeap {

private:
	vector<int> Max;
	
	int pai(int i); //não chamar caso i for a raiz
	int esq(int i);
	int dir(int i);
	void heapify_up(int i); //quando adiciona um novo elemento
	void heapify_down(int i); //quando o elemento do topo

public:
	unsigned int size();
	bool empty();
	void push();
	void pop();
	int top();
	
	
};

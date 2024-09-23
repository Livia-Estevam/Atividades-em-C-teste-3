#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite o divisor: ";
	cin >> y;
	
	if(y== 0){
		cout << "Digite um numero valido! ";
	}
	else{
		int div = x / y;
		cout << "O resultado da divisao e: " << div;
	}
	return 0;
}

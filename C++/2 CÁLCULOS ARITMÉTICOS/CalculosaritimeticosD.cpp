#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	
	int div1p2 = x / y;
	cout << "O resultado da divisao do primeiro numero pelo segundo e: " << div1p2;
	return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite o segundo numero: ";
	cin >> y;
	
	int div2p1 = y / x;
	cout << "A divisao do primeiro numero pelo segundo e: " << div2p1;
	return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	int z = x + y;
	cout << "A soma dos numeros e: " << z;
	return 0;
}

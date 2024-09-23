#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int num1;
	int num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	if(num1 == num2){
		cout << "Os numeros digitados sao iguais!";
	} else{
		cout << "Os numeros digitados nao sao iguais, tente novamente!";
	}
	return 0;
}

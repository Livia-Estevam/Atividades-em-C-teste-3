#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num1;
	int num2;
	int num3;
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero:";
	cin >> num2;
	cout << "Digite o tereiro numero: ";
	cin >> num3;
	
	if(num1 < num2 && num1 > num3){
		cout << "O primeiro numero e menor que o segundo e maior que o terceiro!";
		
	} else{
		cout << "Digite outros numeros!";
	}
	
	return 0;
}

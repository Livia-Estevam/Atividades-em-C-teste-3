#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	float num1;
	float num2;
	
	cout << "Digite um numero real: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	if(num1 < num2  || num1 == num2 ){
		cout << "O preimeiro numero digitado e menor ou igual a segundo! ";
		
	}else{
		cout << "O primeiro numero e maior que o segundo!";
	}
	return 0;
}

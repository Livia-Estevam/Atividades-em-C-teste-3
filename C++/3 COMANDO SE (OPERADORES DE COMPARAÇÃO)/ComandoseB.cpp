#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int num1;
	int num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	if(num1 < num2){
		cout << "O primeiro numero digitado e menor que o segundo!";
		
	}else{
		cout << "Tente novamente!";
	}
	return 0;
}


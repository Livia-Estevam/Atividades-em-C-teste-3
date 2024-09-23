#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	float num1;
	float num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	if(num1 >= num2){
		cout << "O primeiro numero digitado e maior ou igual ao segundo!";
		
	}else {
		cout << "O segundo numero é maior que o primeiro!""
	}
	return 0;
}

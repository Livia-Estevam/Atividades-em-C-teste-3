#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num1;
	int num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	int diferenca = num1 - num2;
	if(diferenca < 10){
		cout << "A diferença deles e menor que 10!";
		
	}else if(diferenca ==10){
		cout << "A diferença deles e igual a  10! ";
		
	}else{
		cout << "A diferença deles e maior que 10!";
	}
	return 0;
}

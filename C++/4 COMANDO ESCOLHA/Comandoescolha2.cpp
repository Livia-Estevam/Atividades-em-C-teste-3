#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "1 - Adição\n";
	cout << "2 - Subtração\n";
	cout << "3 - Multiolicação\n";
	cout << "4 - Divisão\n";
	int es;
	float num1;
	float num2;
	float result;
	cout << "Escolha uma operação para realiza: ";
	cin >> es;
	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	
	switch (es){
		case 1:
			result = num1 + num2;
			cout << "O resultado da adição é: " << result;
			break;
		case 2:
			result = num1 - num2;
			cout << "O resultado da subtração é: " << result;
			break;
		case 3:
			result = num1 * num2;
			cout << "O resultado da multiplicação é: " << result;
			break;
		case 4:
		    result = num1 / num2;
			cout << "O resultado da divisão é: " << result;
			break;	
			
		
	}
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "1 - Adi��o\n";
	cout << "2 - Subtra��o\n";
	cout << "3 - Multiolica��o\n";
	cout << "4 - Divis�o\n";
	int es;
	float num1;
	float num2;
	float result;
	cout << "Escolha uma opera��o para realiza: ";
	cin >> es;
	cout << "Digite um n�mero: ";
	cin >> num1;
	cout << "Digite outro n�mero: ";
	cin >> num2;
	
	switch (es){
		case 1:
			result = num1 + num2;
			cout << "O resultado da adi��o �: " << result;
			break;
		case 2:
			result = num1 - num2;
			cout << "O resultado da subtra��o �: " << result;
			break;
		case 3:
			result = num1 * num2;
			cout << "O resultado da multiplica��o �: " << result;
			break;
		case 4:
		    result = num1 / num2;
			cout << "O resultado da divis�o �: " << result;
			break;	
			
		
	}
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int mensagem;
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "1 - Ingl�s\n";
	cout << "2 - Portugu�s\n";
	cout << "Digite o n�mero referente ao idioma que voc� quer receber uma mensagem de boas-vindas: ";
	cin >> mensagem;
	
	switch (mensagem){
		case 1:
			cout << "Welcome!";
			break;
		case 2:
			cout << "Bem-vindo (a)!";
			break;
		
	}
	
	
	
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int mensagem;
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "1 - Inglês\n";
	cout << "2 - Português\n";
	cout << "Digite o número referente ao idioma que você quer receber uma mensagem de boas-vindas: ";
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

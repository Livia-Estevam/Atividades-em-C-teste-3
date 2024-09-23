#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int banco;
	float valor;
	setlocale(LC_ALL, "portuguese");
	cout << "---- Menu ----\n";
	cout << "1 - Depósito\n";
	cout << "2 - Saque\n";
	cout << "3 - Consulta de Saldo\n";
	cout << "Escolha um serviço pra ser realizado: ";
	cin >> banco;
	cout << "Se for fazer saque ou depósito, digite o valor: ";
	cin >> valor;
	
	switch (banco){
		case 1:
			cout << "O valor de " << valor << "  R$ foi depositado com sucesso!";
			break;
		case 2:
			cout << "O saque no valor de " << valor << " R$ foi realizado com sucesso!";
			break;
		case 3:
			cout << "O extrato foi impresso com sucesso!";
			break;
		
	}
	
	
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int mes;
	setlocale(LC_ALL, "portuguese");
	
	cout << "----- Menu -----\n";
	cout << "1 - Janeiro\n";
	cout << "2 - Fevereiro\n";
	cout << "3 - Março\n";
	cout << "4 - Abril\n";
	cout << "5 - Maio\n";
	cout << "6 - Junho\n";
	cout << "7 - Julho\n";
	cout << "8 - Agosto\n";
	cout << "9 - Setembro\n";
	cout << "10 - Outubro\n";
	cout << "11 - Novembro\n";
	cout << "12 - Dezembro\n";
	
	cout << "Escolha um mês do ano para saber quantos dias tem: ";
	cin >> mes;
	
	switch (mes){
		case 1:
			cout << "Esse mês tem 31 dias!";
			break;
		case 2:
			cout << "Esse mês tem 28 dias e 29 em anos bissextos!";
			break;
		case 3:
			cout << "Esse mês tem 31 dias!";
			break;
		case 4:
			cout << "Esse mês tem 30 dias!";
			break;
		case 5:
			cout << "Esse mês tem 31 dias!";
			break;
	    case 6:	
	        cout << "Esse mês tem 30 dias!";
			break;
		case 7:
			cout << "Esse mês tem 31 dias!";
			break;
		case 8:
			cout << "Esse mês tem 31 dias!";
			break;
		case 9:
			cout << "Esse mês tem 30 dias!";
			break;
		case 10:
			cout << "Esse mês tem 31 dias!";
			break;
		case 11:
			cout << "Esse mês tem 30 dias!";
			break;
		case 12:
			cout << "Esse mês tem 31 dias!";
			break;
	}
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu ------\n";
	cout << "1 - Segunda\n";
	cout << "2 - Terça\n ";
	cout << "3 - Quarta\n";
	cout << "4 - Quinta\n";
	cout << "5 - Sexta\n";
	cout << "6 - Sábado\n";
	cout << "7 - Domingo\n";
	int dia;
	cout << "Escolha um número que represente um dia da semana, para seber se dia útil ou final de semana: ";
	cin >> dia;
	switch(dia){
		
		case 1: 
		 cout << "É dia útil!";
		 break;
		 
		case 2:
			cout << "É dia útil!";
			break;
		case 3:
			cout << "É dia útil!";
			break;
			
		case 4:
			cout << "É dia útil!";
			break;
		case 5:
			cout << cout << "É dia útil!";
			break;
		case 6:
			cout << "É dia útil!";
			break;
		case 7:
		    cout << "É final de semana!";
			break;
		case 8:
		    cout << "É final de semana!";
			break;	
			
	}
	
	
	
	
	return 0;
}

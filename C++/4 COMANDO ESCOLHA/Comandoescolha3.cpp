#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu ------\n";
	cout << "1 - Segunda\n";
	cout << "2 - Ter�a\n ";
	cout << "3 - Quarta\n";
	cout << "4 - Quinta\n";
	cout << "5 - Sexta\n";
	cout << "6 - S�bado\n";
	cout << "7 - Domingo\n";
	int dia;
	cout << "Escolha um n�mero que represente um dia da semana, para seber se dia �til ou final de semana: ";
	cin >> dia;
	switch(dia){
		
		case 1: 
		 cout << "� dia �til!";
		 break;
		 
		case 2:
			cout << "� dia �til!";
			break;
		case 3:
			cout << "� dia �til!";
			break;
			
		case 4:
			cout << "� dia �til!";
			break;
		case 5:
			cout << cout << "� dia �til!";
			break;
		case 6:
			cout << "� dia �til!";
			break;
		case 7:
		    cout << "� final de semana!";
			break;
		case 8:
		    cout << "� final de semana!";
			break;	
			
	}
	
	
	
	
	return 0;
}

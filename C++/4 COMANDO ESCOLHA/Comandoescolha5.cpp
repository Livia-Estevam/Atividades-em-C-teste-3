#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "1 - Baixa\n";
	cout << "2 - M�dia\n";
	cout << "3 - Alta\n";
	int vel;
	cout << "Escolha uma velocidade: ";
	cin >> vel;
	
	switch (vel){
		case 1:
			cout << "O limite de velocidade permitido na via 040 � de 70 km/h";
			break;
			
		case 2:
			cout << "O linite de velocidade na via 381 � de 80 km/h";
			break;
		case 3:
			cout << "O limite de velocidade no Anel Rodovi�rio de 80 km/h";
			break;
		
		
	}
	
	return 0;
}

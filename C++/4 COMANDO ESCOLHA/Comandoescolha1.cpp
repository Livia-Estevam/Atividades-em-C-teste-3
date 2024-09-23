#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	int horario;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um número, para saber o horário do dia (1 - Manhã) (2- Tarde) (3- Noite): ";
	cin >> horario;
	
	switch(horario){
	 case 1:
		cout << "Manhã";
		break;
	 case 2:
	    cout << "Tarde";
	    break;
	 case 3:
	    cout << "Noite";
	    break;
	 
		
	}
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	int horario;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um n�mero, para saber o hor�rio do dia (1 - Manh�) (2- Tarde) (3- Noite): ";
	cin >> horario;
	
	switch(horario){
	 case 1:
		cout << "Manh�";
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

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	string robo;
	cout << "Voc� � um rob� (S ou N)? ";
	cin >> robo;
	
	if(robo == "N" ){
		cout << "Por favor, prove que n�o � um rob�!";
		
	}
	return 0;
}

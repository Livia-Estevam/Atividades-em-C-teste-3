#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	string membro;
	
	cout << "Voc� � um membro ativo do clube (S ou N)? ";
	cin >> membro;
	
	if(membro == "N"){
		cout << "Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do clube!";
	}
	
	return 0;
}

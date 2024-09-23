#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	string membro;
	
	cout << "Você é um membro ativo do clube (S ou N)? ";
	cin >> membro;
	
	if(membro == "N"){
		cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube!";
	}
	
	return 0;
}

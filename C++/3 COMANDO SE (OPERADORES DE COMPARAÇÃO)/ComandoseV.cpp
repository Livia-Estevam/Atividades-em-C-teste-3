#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	string nome;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	if(nome == "Wilson" || nome == "Gloria"){
		cout << "Olá, bem vindo (a) de volta!";
		
	}
	return 0;
}

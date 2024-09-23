#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string nome;
	int idade;
	
	cout << "Digite seu nome: ";
	getline (cin,nome);
	cout << "Digite a a sua idade: ";
	cin >> idade;
	
	if(nome.length() > 3 && idade > 18){
		cout << " Acesso permitido!";
		
	}else{
		cout << "Acesso negado!";
	}

	
	return 0;
}

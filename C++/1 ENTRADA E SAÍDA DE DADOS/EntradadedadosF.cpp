#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string nome;
	int idade;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	cout << "Digite a sua idade: ";
	cin >> idade;
	cout << "O seu nome e: " << nome << "\n";
	cout << "A sua idade e: " << idade;
	
	return 0;
}

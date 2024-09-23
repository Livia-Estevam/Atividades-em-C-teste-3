#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string rua;
	string bairro;
	string cidade;
	string estado;
	string num;
	
	cout << "Digite o nome da sua rua: ";
	getline (cin, rua);
	cout << "Digite o numero da sua casa: ";
	getline (cin, num);
	cout << "Digite o nome do seu0 bairro: ";
	getline (cin, bairro);
	cout << "Digite o nome da sua cidade: ";
	getline (cin, cidade);
	cout << "Digite o nome do seu estado: ";
	getline (cin, estado);
	cout << rua << ","<< " " << num << "," << " " << bairro << ","<< " "<< cidade << ","<< " "<< estado;
	
;	return 0;
}

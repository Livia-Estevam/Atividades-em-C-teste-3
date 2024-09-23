#include <iostream>
#include <locale.h>
using namespace std;


int main(int argc, char** argv) {
	int tamanho;
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout << "P\n";
	cout << "M\n";
	cout << "G\n";
	cout << "Esolha o taanho da camisa para saber o preço: ";
	cin >> tamanho;
	
	switch (tamanho){
		case 1:
			cout << "O valor é R$ 10,00";
			break;
		case 2:
			cout << "O valor é R$ 20,00";
			break;
		case 3:
			cout << "O valor é R$ 30,00";
			break;
		
	}
	return 0;
}

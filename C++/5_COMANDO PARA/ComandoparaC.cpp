#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string palavra;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	for (int contador = 0; contador < palavra.length(); contador++){
		cout << palavra [contador] << endl;
	}
	
	return 0;
}

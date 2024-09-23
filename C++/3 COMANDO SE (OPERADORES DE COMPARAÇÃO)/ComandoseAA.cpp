#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	string palavra;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	if(palavra.length() > 1){
		cout << "A palavra não é vazia!";
		
	}

	return 0;
}

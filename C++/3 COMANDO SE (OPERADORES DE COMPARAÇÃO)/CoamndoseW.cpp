#include <iostream>
#include <string>
#include <locale.h>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int num; 
	cout << "Digite um número: ";
	cin >> num;
	
	if(num > 10 || num < 0){
		cout << "Número inválido!";
		
	}
	
	return 0;
}

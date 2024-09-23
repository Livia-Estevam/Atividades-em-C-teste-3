#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;


int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um número: ";
	cin >> num;
	
	if(num % 3 == 0 || num % 5 == 0){
		cout << "O número digitado é divisível por 3 ou por 5!";
		
	}else{
		cout << "O número não é divisível nem por 3 nem por 5!";
	}
	
	return 0;
}

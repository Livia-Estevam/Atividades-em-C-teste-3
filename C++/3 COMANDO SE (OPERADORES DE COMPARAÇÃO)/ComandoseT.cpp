#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;


int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um n�mero: ";
	cin >> num;
	
	if(num % 3 == 0 || num % 5 == 0){
		cout << "O n�mero digitado � divis�vel por 3 ou por 5!";
		
	}else{
		cout << "O n�mero n�o � divis�vel nem por 3 nem por 5!";
	}
	
	return 0;
}

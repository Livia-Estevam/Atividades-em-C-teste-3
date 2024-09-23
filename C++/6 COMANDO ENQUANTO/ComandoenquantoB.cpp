#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int num; 
	cout << "Digite um número inteiro positivo: ";
	cin >> num;
	int i = 0;
	
	while(i <= 10){
		int mult = num * i;
		cout << " \n" << num << " *  " << i << " = " << mult;
		i++;
	}
	
	
	
	
	return 0;
}

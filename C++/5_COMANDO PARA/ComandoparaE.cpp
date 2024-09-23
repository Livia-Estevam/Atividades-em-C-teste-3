#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int num;
	int resultado;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um número inteiro, para saber se ele é primo: ";
	cin >> num;
	for(int i =2; i < num ; i++){
		if(num % i == 0){
			resultado++;
		}
		
	}
	if (resultado == 0){
			cout << "O número "<< num << " é primo!";
		}else {
			cout << "O número " << num << " não é primo!";
		}
		
	
	return 0;
}

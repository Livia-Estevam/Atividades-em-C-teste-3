#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int num;
	int resultado;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um n�mero inteiro, para saber se ele � primo: ";
	cin >> num;
	for(int i =2; i < num ; i++){
		if(num % i == 0){
			resultado++;
		}
		
	}
	if (resultado == 0){
			cout << "O n�mero "<< num << " � primo!";
		}else {
			cout << "O n�mero " << num << " n�o � primo!";
		}
		
	
	return 0;
}

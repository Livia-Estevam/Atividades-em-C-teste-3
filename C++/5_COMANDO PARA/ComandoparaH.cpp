#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	int num;
	cout << "Digite um número inteiro: ";
	cin >> num;
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			cout <<"\n" << i;
			
		}
		
	}
	
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	int num;
	cout << "Digite um n�mero inteiro positivo: ";
	cin >> num;
	int i = 0;
	while(i < num){
		if(i % 2 == 0){
			cout << i << "\n"; 
		}
		i++;
	}
	
	
	
	
	
	return 0;
}

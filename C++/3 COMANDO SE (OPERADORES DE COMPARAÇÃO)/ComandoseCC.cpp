#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	float ld1;
	float ld2;
	float ld3;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite o valor do primeiro lado do tri�ngulo: ";
	cin >> ld1;
	cout << "Digite o valor do segundo lado do tri�ngulo: ";
	cin >> ld2;
	cout << "Digite o valor do terceiro lado do tri�ngulo: ";
	cin >> ld3;
	
	if(ld1 == ld2 && ld2 == ld3){
		cout << "O tri�ngulo � equil�tero!";
			
	} else if(ld1 == ld2 || ld1 == ld3 || ld2 == ld3  ){
		cout << "O tri�ngolo � is�celes!";
	} else{
		cout << "O tri�ngulo � escaleno!";
	}
	return 0;
}

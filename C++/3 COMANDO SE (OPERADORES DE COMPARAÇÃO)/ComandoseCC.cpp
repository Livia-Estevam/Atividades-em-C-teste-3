#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	float ld1;
	float ld2;
	float ld3;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite o valor do primeiro lado do triângulo: ";
	cin >> ld1;
	cout << "Digite o valor do segundo lado do triângulo: ";
	cin >> ld2;
	cout << "Digite o valor do terceiro lado do triângulo: ";
	cin >> ld3;
	
	if(ld1 == ld2 && ld2 == ld3){
		cout << "O triângulo é equilátero!";
			
	} else if(ld1 == ld2 || ld1 == ld3 || ld2 == ld3  ){
		cout << "O triãngolo é isóceles!";
	} else{
		cout << "O triângulo é escaleno!";
	}
	return 0;
}

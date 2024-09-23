#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float peso;
	float altura;
	cout << "Digite o seu peso : ";
	cin >> peso;
	cout << "Digite a sua altura: ";
	cin >> altura;
	float imc = peso / (altura * altura) ;
	cout << "O seu imc e: " << imc;
	return 0;
}

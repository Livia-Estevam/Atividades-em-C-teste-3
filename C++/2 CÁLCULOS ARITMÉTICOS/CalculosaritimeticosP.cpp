#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio;
	float altura;
	
	cout << "Digite o raio de um cilindro: ";
	cin >> raio;
	cout << "Digite a altura do cilindro: ";
	cin >> altura;
	int v = raio * raio;
	int v2 = 3.14 * v * altura;
	cout << "O volume do cilincro e: " << v2;
	return 0;
}

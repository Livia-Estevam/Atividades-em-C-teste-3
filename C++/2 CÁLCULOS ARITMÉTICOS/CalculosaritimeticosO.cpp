#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio;
	
	cout << "Digite o raio de um circulo: ";
	cin >> raio;
	float raio2 = raio * raio;
	float area = 3.14 * raio2;
	
	cout << "A area do circulo e: " << area;
	return 0;
}

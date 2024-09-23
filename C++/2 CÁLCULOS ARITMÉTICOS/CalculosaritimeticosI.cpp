#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	int y;
	
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	int mult = x * y;
	cout << "A multiplicacao dos numeros e: " << mult;
	
	return 0;
}

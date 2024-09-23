#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float celcius;
	
	
	cout << "Digite uma temperatura em celcius: ";
	cin >> celcius;
	
	float fahrenheit = celcius * 1.8 + 32;
	cout << "A temperatura em fahrenheit e: " << fahrenheit;
	
	return 0;
}

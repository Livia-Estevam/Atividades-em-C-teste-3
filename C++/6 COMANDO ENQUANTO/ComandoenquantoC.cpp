#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int i = 1;
	int adc = 0;
	
	while(i < 5){
		int num;
		cout << "Digite o " << i << "� " << "n�mero: ";
		cin >> num;
		adc += num;
		i++;
		
	}
	cout << "A soma dos n�meros �: " << adc;
	
	
	
	
	
	return 0;
}

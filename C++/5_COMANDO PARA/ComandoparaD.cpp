#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um número inteiro positivo: ";
	cin >> num;
	int sum = 0;
	for(int i =0; i <= num; i++){
		sum += i ;
	}
		cout << "\n" << sum;
	return 0;
}

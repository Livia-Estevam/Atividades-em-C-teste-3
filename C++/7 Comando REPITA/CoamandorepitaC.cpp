#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int num;
	int sum;
	int i;
	do{
		cout << "Digite um número: ";
		cin >> num;
		sum += num;
		i++;
	}
	while(i<=5);
	cout << "A soma dos números digitados é: " << sum;
	
	
	
	
	
	return 0;
}

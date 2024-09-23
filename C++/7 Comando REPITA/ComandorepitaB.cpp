#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int num;
	cout <<"Digite um número inteiro positivo: ";
	cin >> num;
	int i;
	do{

		cout << "\n "<< num << " * " << i << " = " << num * i;
		i++;
	
	}

	while(i<=10);
	return 0;
}

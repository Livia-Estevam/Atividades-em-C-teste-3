#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	
	int num;
	
	cout << "Digite um número inteiro positivo: ";
	cin >> num;
	int i;
	do{
		if(i % 2 == 0){
			cout << i << "\n";
			
		}
		i++;
	}
	while(i<= num);
	return 0;
}

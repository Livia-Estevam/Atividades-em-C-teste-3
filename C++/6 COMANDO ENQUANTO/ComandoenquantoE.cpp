#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int num;
	int sum;
	 do {
	 	cout << "Digite um número: ";
	 	cin >> num;
	 	if(num > 0){
	 		sum += num;
		 }
	 	
	 }
	 
	 while (num > 0);
	 
	 cout << "A soma dos números é: " << sum;
	
	return 0;
}

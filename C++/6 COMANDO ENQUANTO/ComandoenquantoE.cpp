#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int num;
	int sum;
	 do {
	 	cout << "Digite um n�mero: ";
	 	cin >> num;
	 	if(num > 0){
	 		sum += num;
		 }
	 	
	 }
	 
	 while (num > 0);
	 
	 cout << "A soma dos n�meros �: " << sum;
	
	return 0;
}

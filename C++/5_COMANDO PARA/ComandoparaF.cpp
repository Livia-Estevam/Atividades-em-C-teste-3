#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	int num;
	int maior = 0;
	for(int i = 1; i <= 5; i++){
		
	  cout << "Digite o " << i << "� n�mero: ";
	  cin >> num;
	    if(num > maior){
	  	maior = num;
	   }
	}
	cout << "O maior n�mero digitado foi: " << maior;
	
	return 0;
}

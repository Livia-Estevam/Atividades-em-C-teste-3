#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	int num;
	int maior = 0;
	for(int i = 1; i <= 5; i++){
		
	  cout << "Digite o " << i << "° número: ";
	  cin >> num;
	    if(num > maior){
	  	maior = num;
	   }
	}
	cout << "O maior número digitado foi: " << maior;
	
	return 0;
}

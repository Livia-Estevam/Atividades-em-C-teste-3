#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int ano;
	cout << "Digite um ano para ver se ele e bissexto: ";
	cin >> ano;
	if(ano % 4 == 0 && ano % 100 != 0){
		cout << "O ano e bissexto! ";
		
	} else {
		cout << "O ano nao e bissexto!";
	}
	return 0;
}

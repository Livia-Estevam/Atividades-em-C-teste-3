#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	
	string deseja;
	setlocale(LC_ALL, "portuguese");
	cout << "Você deseja comprar um produto? ";
	cin >> deseja;
	
	if(deseja == "sim" || deseja == "s"){
		cout << "Obrigado pela compra!";
		
	}
	return 0;
}

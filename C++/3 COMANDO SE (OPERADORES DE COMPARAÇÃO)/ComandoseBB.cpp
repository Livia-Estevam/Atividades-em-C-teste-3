#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	string deseja;
	setlocale(LC_ALL, "portuguese");
	cout << "Voc� n�o deseja cancelar a opera��o(S ou N)?";
	cin >> deseja;
	
	if(deseja == "N"){
		cout << "Por favor, confirme o cancelamento da opera��o!";
	
}
	return 0;
}

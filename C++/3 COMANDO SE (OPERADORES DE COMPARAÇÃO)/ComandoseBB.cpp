#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	string deseja;
	setlocale(LC_ALL, "portuguese");
	cout << "Você não deseja cancelar a operação(S ou N)?";
	cin >> deseja;
	
	if(deseja == "N"){
		cout << "Por favor, confirme o cancelamento da operação!";
	
}
	return 0;
}

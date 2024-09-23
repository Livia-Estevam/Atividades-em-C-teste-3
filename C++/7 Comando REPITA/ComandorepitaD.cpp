#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	int senhainserida;
	cout << "Insira uma senha: ";
	cin >> senhainserida;
	int tentativa;
	int i = 1;
	
	do{
		cout << "Tente acertar a senha:\n ";
		cin >> tentativa;
		i++;
		
		
		
		
		 if(tentativa == senhainserida){
		 	cout << "Parabéns, você acertou a senha!" << endl;
		 	break;
		 	
		 }
		 	
		 }
	
	while(i <=3);
		 if(tentativa != senhainserida){
		 	cout << "Suas tentativas se esgotaram e você não conseguiu acertar!";
		 }
	
	  
	return 0;
}


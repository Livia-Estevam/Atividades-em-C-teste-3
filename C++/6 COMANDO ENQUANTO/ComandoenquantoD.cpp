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
	
	while ( i <=3){
		int tentativa;
		cout << "Tente acertar a senha:\n ";
		cin >> tentativa;
		i++;
		
		
		
		
		 if(tentativa == senhainserida){
		 	cout << "Parab�ns, voc� acertou a senha!" << endl;
		 	break;
		 	
		 }else {
		 	cout << "Voc� n�o conseguiu acertar\n!";
		 	
		 }
	}
		 if(tentativa != senhainserida){
		 	cout << "Suas tentativas se esgotaram e voc� n�o conseguiu acertar!";
		 }
	
	
	  
	return 0;
}

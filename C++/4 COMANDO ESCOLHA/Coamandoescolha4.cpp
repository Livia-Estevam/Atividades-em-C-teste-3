#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int opc;
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout <<"1 - Gato\n";
	cout <<"2 - Cachorro\n";
	cout <<"3 - P�ssaro\n"; 
	cin >> opc;
	
	switch (opc){
		case 1:
			cout <<"Um gato consegue ouvir sons de alta frequ�ncia, cerca de 2 oitavas acima de qualquer humano!";
			break;
		case 2:
			cout << "Al�m de ter um olfato muito mais refinado, que permite detectar a presen�a do tutor pelo cheiro, eles tamb�m t�m uma audi��o agu�ada e s�o capazes de detectar ru�dos muito mais f�cil que n�s!";
			break;
		case 3:
			cout <<"Aves s�o uma classe de seres vivos vertebrados endot�rmicos!";
			break;
	}
	return 0;
}

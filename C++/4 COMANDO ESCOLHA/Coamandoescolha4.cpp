#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int opc;
	setlocale(LC_ALL, "portuguese");
	cout << "----- Menu -----\n";
	cout <<"1 - Gato\n";
	cout <<"2 - Cachorro\n";
	cout <<"3 - Pássaro\n"; 
	cin >> opc;
	
	switch (opc){
		case 1:
			cout <<"Um gato consegue ouvir sons de alta frequência, cerca de 2 oitavas acima de qualquer humano!";
			break;
		case 2:
			cout << "Além de ter um olfato muito mais refinado, que permite detectar a presença do tutor pelo cheiro, eles também têm uma audição aguçada e são capazes de detectar ruídos muito mais fácil que nós!";
			break;
		case 3:
			cout <<"Aves são uma classe de seres vivos vertebrados endotérmicos!";
			break;
	}
	return 0;
}

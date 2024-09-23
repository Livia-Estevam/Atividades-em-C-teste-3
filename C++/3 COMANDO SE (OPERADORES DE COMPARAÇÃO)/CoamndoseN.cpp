#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int idadeu;
	
	cout << "Digite a sua idade, para saber se voce ja pode dirigir: ";
	 cin >> idadeu;
	 
	 if (idadeu >= 18){
	 cout << "Voce ja pode dirigir!";
	
	} else {
		cout << "Voce ainda nao pode dirigir!";
	}
;	return 0;
}

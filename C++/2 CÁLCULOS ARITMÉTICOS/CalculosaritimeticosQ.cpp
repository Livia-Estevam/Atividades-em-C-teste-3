#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float primeira;
	float segunda;
	float terceira;
	float primeirap;
	float segundap;
	float terceirap;
	cout << "Digite a primeira nota: ";
	cin >> primeira;
	cout << "Digite o peso da nota: ";
	cin >> primeirap;
	cout << "Digite a segunda nota: ";
	cin >> segunda;
	cout << "Digite o peso da nota: ";
	cin >> segundap;
	cout << "Digite a terceira nota: ";
	cin >> terceira;
	cout << "Digite o peso da nota: ";
	cin >> terceirap;
	
	float v1nota = primeira * primeirap;
	float v2nota = segunda * segundap;
	float v3nota = terceira * terceirap;
	float parte1 = v1nota + v2nota + v3nota;
	float pesos = primeirap + segundap + terceirap;
	float mediap = parte1 / pesos;
	
	cout << "A media ponderada das notas e: " << mediap;
	 	 
	return 0;
}

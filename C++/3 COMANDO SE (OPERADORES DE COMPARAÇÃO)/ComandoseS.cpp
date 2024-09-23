#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	string deseja;
	
	cout<< "Voce deseja adicionar açucar ou leite ao seu cafe(Sim ou Nao): ";
	cin >> deseja;
	
	if(deseja == "Sim"){
		cout << "Cafe com adicional preparado!";
	}else{
		cout << "Cafe puro preparado!";
	}

	return 0;
}

#include <iostream>
#include <string>>
using namespace std;

int main(int argc, char** argv) {
	string diploma;
	string idade;
	
	cout << "Voce tem diploma de ensino superior? ";
	cin >> diploma;
	cout << "Voce tem mais de 21 anos? ";
	cin >> idade;
	
	if (diploma == "Sim "  && idade == "Sim"){
		cout << "Voce esta qualificado para a a vaga!";
		
	}else  if (diploma == "Sim "&& idade == "Nao" ){
		cout << "Voce nao se encaixa nos requisitos exigidos!";
	} else {
		cout << "Voce nao se encaixa nos requisitos!";
	}
	return 0;
}

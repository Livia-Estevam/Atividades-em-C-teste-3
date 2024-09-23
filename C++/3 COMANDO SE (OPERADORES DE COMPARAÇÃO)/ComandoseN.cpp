#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string deseja;
	string dinheiro;
	
	cout << "Voce deseja comprar um carro novo? ";
	cin >> deseja;
	cout << "Voce tem dinhiro suficiente para isso? ";
	cin >> dinheiro;
	
	if(deseja == "Sim" || deseja == "sim" && dinheiro == "Sim " || dinheiro == "sim"){
		
		cout << "Parabens, voce pode comprar um carro novo! ";
	
	}else{
		cout << "Muito obrigada pela participacao!";
	}
	
	return 0;
}

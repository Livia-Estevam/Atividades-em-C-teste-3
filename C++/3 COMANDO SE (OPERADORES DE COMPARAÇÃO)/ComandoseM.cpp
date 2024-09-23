#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int num;
	
	cout << "Digite um numero que represente um mes, para saber quantos dias ele tem: ";
	cin >> num;
	
	if(num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12){
		cout << "O mes escolhido tem 31 dias!";
		
	} else if(num == 4 || num == 6 || num == 9 || num == 11){
		cout << "O mes escolhido tem 30 dias!";
		
	}else{
		cout << "O mes escolhido tem 28 dias ou 29 em anos bissextos!";
	}

	return 0;
}

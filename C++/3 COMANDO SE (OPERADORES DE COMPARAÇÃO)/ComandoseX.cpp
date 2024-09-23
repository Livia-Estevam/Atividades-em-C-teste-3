#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	string robo;
	cout << "Você é um robô (S ou N)? ";
	cin >> robo;
	
	if(robo == "N" ){
		cout << "Por favor, prove que não é um robô!";
		
	}
	return 0;
}

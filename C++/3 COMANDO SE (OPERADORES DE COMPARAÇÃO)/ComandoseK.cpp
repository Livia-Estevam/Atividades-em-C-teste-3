#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int num;
	
	cout << "Digite um numero inteiro: ";
	cin >> num;
	
	if (num < 0){
		cout << "O numero digitado e negativo! ";
		
	} else {
		cout << "O numero digitado e positivo!";
	}
	
	return 0;
}

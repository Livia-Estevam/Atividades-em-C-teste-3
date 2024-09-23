#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int num;
	cout << "Digite um numero inteiro: ";
	cin >> num;
	
	if(num % 2 != 0){
		cout << "O numero e impar!";
		
	}else {
		cout << "O numero e par!";
	}
	return 0;
}

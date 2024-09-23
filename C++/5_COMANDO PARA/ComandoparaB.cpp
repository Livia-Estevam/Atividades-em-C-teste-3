#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	for (int i = 0; i < num; i++){
		if (i % 2 == 0){
			cout << "\n" << i;
		}
	}
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	cout <<"Digie um n�mero: ";
	cin >> num;
	
	if(num != 0){
		cout << "O n�mero � diferente de zero!";
		
	}
	return 0;
}

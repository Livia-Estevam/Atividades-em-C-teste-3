#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	int num;
	setlocale(LC_ALL, "portuguese");
	cout <<"Digie um número: ";
	cin >> num;
	
	if(num != 0){
		cout << "O número é diferente de zero!";
		
	}
	return 0;
}

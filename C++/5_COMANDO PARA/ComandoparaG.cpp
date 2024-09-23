#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 5 ; i <= 10; i++){
		for (int f = 1 ; f <=10; f++){
			int mult = i * f;
			cout << " \n" << i << "*" << f << " = " << mult;
	
		}
		
	}
	
	return 0;
}

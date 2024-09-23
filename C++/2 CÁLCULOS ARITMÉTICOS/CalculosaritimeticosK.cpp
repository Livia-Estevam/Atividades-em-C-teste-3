#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int x;
	int y;
	int z;
	
	cout << "Digite o primeiro numero: ";
	cin >> x;
	cout <<  "Digite o segundo numero:";
	cin >> y;
	cout << "Digite o terceiro numero: ";
	cin >> z;

	
	int media = (x + y + z) / 3;
	
	cout << "A media aritimetica dos numeros e: "<< media;
	
	return 0;
}

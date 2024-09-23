#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float preco;
	float desconto;
	
	cout << "Digite o preço de um produto: ";
	cin >> preco;
	
	cout << "Digite a porcentagem do desconto sem o simbolo de porcentagem: ";
	cin >> desconto;
	
	float vf1 = preco/ 100 * desconto;
	cout << "O valor final e: " << vf1;
	return 0;
}

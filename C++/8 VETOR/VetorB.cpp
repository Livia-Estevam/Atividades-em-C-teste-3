#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    double vetor[tamanho] = {10.5, 20.5, 30.5, 40.5, 50.5};
    
    double soma = 0;
    for(int i = 0; i < tamanho; ++i) {
        soma += vetor[i];
    }
    
    double media = soma / tamanho;
    
    cout << "Média dos valores do vetor: " << media << endl;
    
    return 0;
}


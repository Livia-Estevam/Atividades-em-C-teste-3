#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 5, 30, 15};
    
    int menor = vetor[0];
    for(int i = 1; i < tamanho; ++i) {
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    std::cout << "Menor valor do vetor: " << menor << std::endl;
    
    return 0;
}


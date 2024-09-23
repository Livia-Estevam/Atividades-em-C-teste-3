#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 5, 30, 15};
    
    int maior = vetor[0];
    for(int i = 1; i < tamanho; ++i) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    std::cout << "Maior valor do vetor: " << maior << std::endl;
    
    return 0;
}


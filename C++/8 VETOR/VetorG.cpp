#include <iostream>
#include <algorithm> 
#include <string> 
#include <locale.h>
using namespace std;   

int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    std::string nomes[tamanho] = {"Carlos", "Ana", "Beatriz", "Eduardo", "Daniel"};
    
    std::sort(nomes, nomes + tamanho);
    
    std::cout << "Nomes em ordem alfabética:" << std::endl;
    for(int i = 0; i < tamanho; ++i) {
        std::cout << nomes[i] << std::endl;
    }
    
    return 0;
}


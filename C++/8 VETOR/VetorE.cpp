#include <iostream>
#include <algorithm> 
#include <functional> 
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 5, 30, 15};
    
    std::sort(vetor, vetor + tamanho, std::greater<int>());
    
    cout << "Vetor em ordem decrescente:" << endl;
    for(int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}


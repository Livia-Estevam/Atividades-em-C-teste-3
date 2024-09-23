#include <iostream>
#include <algorithm>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 5, 30, 15};
    
    sort(vetor, vetor + tamanho);
    
    cout << "Vetor em ordem crescente:" << endl;
    for(int i = 0; i < tamanho; ++i) {
       cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}


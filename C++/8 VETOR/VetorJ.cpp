#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int tamanho = 10;
    double numeros[tamanho];
    
    double soma = 0;
    
    for(int i = 0; i < tamanho; ++i) {
        cout << "Digite o n�mero " << i+1 << ": ";
        cin >> numeros[i];
        soma += numeros[i];
    }
    
    double media = soma / tamanho;
    
    int iguais30 = 0, maioresMedia = 0, iguaisMedia = 0;
    
    for(int i = 0; i < tamanho; ++i) {
        if(numeros[i] == 30) {
            iguais30++;
        }
        if(numeros[i] > media) {
            maioresMedia++;
        }
        if(numeros[i] == media) {
            iguaisMedia++;
        }
    }
    
    cout << "Quantidade de n�meros iguais a 30: " << iguais30 << endl;
    cout << "Quantidade de n�meros maiores que a m�dia: " << maioresMedia << endl;
    cout << "Quantidade de n�meros iguais � m�dia: " << iguaisMedia << endl;
    
    return 0;
}


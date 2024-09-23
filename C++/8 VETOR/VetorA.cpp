#include <iostream>
using namespace std;
int main() {
    const int tamanho = 5;
    int vetor[tamanho] = {10, 20, 30, 40, 50};
    
    cout << "Elementos do vetor:" << endl;
    for(int i = 0; i < tamanho; ++i) {
        cout << "Elemento [" << i << "] = " << vetor[i] << endl;
    }
    
    return 0;
}

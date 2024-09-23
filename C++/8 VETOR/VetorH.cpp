#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int quantidade = 5;
    double precoCompra[quantidade];
    double precoVenda[quantidade];
    
    for(int i = 0; i < quantidade; ++i) {
        cout << "Digite o preço de compra e venda da mercadoria " << i+1 << ": ";
        cin >> precoCompra[i] >> precoVenda[i];
    }
    
    int menos10 = 0, de10a20 = 0, mais20 = 0;
    
    for(int i = 0; i < quantidade; ++i) {
        double lucro = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100;
        if(lucro < 10) {
            menos10++;
        } else if(lucro <= 20) {
            de10a20++;
        } else {
            mais20++;
        }
    }
    
    cout << "Lucro < 10%: " << menos10 << endl;
    cout << "10% <= Lucro <= 20%: " << de10a20 << endl;
    cout << "Lucro > 20%: " << mais20 << endl;
    
    return 0;
}


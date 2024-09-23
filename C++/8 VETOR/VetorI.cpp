#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
    const int totalMesas = 30;
    const int lugaresPorMesa = 5;
    int reservas[totalMesas] = {0};
    int lugaresDisponiveis = totalMesas * lugaresPorMesa;
    
    while (true) {
        int codigoMesa, lugaresDesejados;
        cout << "Digite o c�digo da mesa (100 a 129) e a quantidade de lugares desejados (ou 0 para sair): ";
        cin >> codigoMesa;
        
        if (codigoMesa == 0) {
            break;
        }
        
        if (codigoMesa < 100 || codigoMesa > 129) {
            cout << "C�digo inv�lido!" << endl;
            continue;
        }
        
        int index = codigoMesa - 100;
        
        if (index < 0 || index >= totalMesas) {
            cout << "Mesa fora do intervalo!" << endl;
            continue;
        }
        
        if (reservas[index] + lugaresDesejados > lugaresPorMesa) {
            cout << "N�o h� lugares suficientes nesta mesa!" << endl;
            continue;
        }
        
        if (lugaresDesejados > lugaresDisponiveis) {
           cout << "N�o h� lugares dispon�veis suficientes!" << endl;
            continue;
        }
        
        reservas[index] += lugaresDesejados;
        lugaresDisponiveis -= lugaresDesejados;
        
        cout << "Reserva realizada com sucesso!" << endl;
        
        if (lugaresDisponiveis == 0) {
            cout << "Todos os lugares est�o ocupados!" << endl;
            break;
        }
    }
    
    return 0;
}


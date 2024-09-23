#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int assinante;
	int serie;
	
	cout << "Voce e assinante da Netflix? (1 = S ou 2 = N):  ";
	cin >> assinante;
	cout << "Voce ja assistiu a serie Outher Banks? (1 = S ou 2 = N): ";
	cin >> serie;
	
	if(assinante == 1 && serie == 1){
		
		cout << "Otimo agora ja pode assistir a nova temporada!";
		
	} else if (assinante == 1 && serie == 2){
		
		cout << "Te recomendo a assistir, a serie e muito boa!";
	} else {
		cout << "Algo deu errado!";
	}
	
	
	return 0;
}

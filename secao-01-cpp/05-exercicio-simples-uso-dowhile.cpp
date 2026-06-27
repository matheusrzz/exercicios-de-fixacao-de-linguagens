#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcaoMenu;

	
	do {
	
		cout << "Selecione um dos itens do menu abaixo." << endl;
		cout << "1 - Sacar Dinheiro" << endl;	
		cout << "2 -  Ver Saldo" << endl;	
		cout << "0 - Sair" << endl;
		cin >> 	opcaoMenu;
		
		if (opcaoMenu == 1){
			
			cout << "\nRealizando saque..." << endl;
			
		}
		else if (opcaoMenu == 2){
			
			cout << "\nSeu saldo é de R$ 500,00" << endl;

		}
	
		
	} while (opcaoMenu != 0);
	
	
	
	
	system("pause");
	return 0;
}

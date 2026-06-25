#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int menuPrograma;
	float valorCompra, valorFinal;
	string nome;
	
	cout << "Digite seu nome: ";
	getline(cin, nome);
	
	cout << "Digite o valor da sua compra: ";
	cin >> valorCompra;
	
	
	cout << "Digite o número correspondente as regiões abaixo para calular o valor final com frete: " << endl;
	cout << "1 - Norte" << endl;
	cout << "2 - Nordente" << endl;
	cout << "3 - Centro-Oeste" << endl;
	cout << "4 - Sudeste" << endl;
	cout << "5 - Sul" << endl;
	cin >> menuPrograma;
	

	switch (menuPrograma) {
		
	case 1:
		cout << "-------------------------------------------------------" << endl;
		cout << "Frente para região Norte é de R$ 30,00 reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		valorFinal = valorCompra + 30;
		cout << "Cliente: " << nome << endl;
		cout << "Valor final com frete: R$" << valorFinal << " reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		break;
		
	case 2:
		cout << "-------------------------------------------------------" << endl;
		cout << "Frente para região Nordeste é de R$ 25,00 reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		valorFinal = valorCompra + 25;
		cout << "Cliente: " << nome << endl;
		cout << "Valor final com frete: R$" << valorFinal << " reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		break;
			
	case 3:
		cout << "-------------------------------------------------------" << endl;
		cout << "Frente para região Centro-Oeste é de R$ 20,00 reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		valorFinal = valorCompra + 20;
		cout << "Cliente: " << nome << endl;
		cout << "Valor final com frete: R$" << valorFinal << " reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		break;
			
	case 4:
		cout << "-------------------------------------------------------" << endl;
		cout << "Frente para região Sudeste é de R$ 10,00 reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		valorFinal = valorCompra + 10;
		cout << "Cliente: " << nome << endl;
		cout << "Valor final com frete: R$" << valorFinal << " reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		break;
			
	case 5:
		cout << "-------------------------------------------------------" << endl;
		cout << "Frente para região Sul é de R$ 15,00 reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		valorFinal = valorCompra + 15;
		cout << "Cliente: " << nome << endl;
		cout << "Valor final com frete: R$" << valorFinal << " reais." << endl;
		cout << "-------------------------------------------------------" << endl;
		break;
		
	default:
		cout << "Opção inválida";
		return 1;	
			
		
	}
	
	
	
	system ("pause");
	return 0;
}

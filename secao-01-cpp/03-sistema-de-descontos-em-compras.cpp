#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	string nomeCliente;
	float valorTotalCompra, desconto10, desconto10Final, desconto15, desconto15Final;
	
	cout<<"Digite o nome do cliente: " << endl;
	getline(cin, nomeCliente);
	
	cout<<"Digite o valor total da compra: " << endl;
	cin>>valorTotalCompra;
	
	cout<<"\n";
	
	if (valorTotalCompra < 100){
		
		cout<<"O valor da sua compra ficou abaixo do valor mínimo de R$ 100,00 e não obteve desconto." << endl;	
	}
	else if ((valorTotalCompra >= 100) && (valorTotalCompra <=500)){
		
		desconto10 = valorTotalCompra * 0.10;
		desconto10Final = 	valorTotalCompra - desconto10;
		cout<<""<< nomeCliente << ", sua compra foi de "<< valorTotalCompra << " e obteve um desconto de 10%, valor final a pagar é de R$ " << desconto10Final << " reais. \n" << endl;
	}
	else if (valorTotalCompra > 500){
		
		desconto15 = valorTotalCompra * 0.15;
		desconto15Final = 	valorTotalCompra - desconto15;
		cout<<""<< nomeCliente << ", sua compra foi de "<< valorTotalCompra << " e obteve um desconto de 15%, valor final a pagar é de R$ " << desconto15Final << " reais. \n" << endl;
	}
	
	
	
	cin.get();
	return 0;
}

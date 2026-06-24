#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	string nomeUsuario;
	int senha;
	float valorSaque, saldoFinal;
	
	senha = 1234;
	
	cout<<"Digite seu usuário: " << endl;
	getline(cin, nomeUsuario);
	
	
	cout<<"Digite sua senha: " << endl;
	cin >> senha;
	
	
	if (senha != 1234){
		
		cout<<"Senha incorreta! Acesso negado." << endl;
		return 0;
	}
	else if (senha == 1234){
		
		cout<<"Digite o valor que deseja sacar: " << endl;
		cin >> valorSaque;
		
		if (valorSaque > 500){
			
			cout<<"Saldo insuficiente!" << endl;
		}
		else if (valorSaque <= 0) {
			
			cout<<"Valor de saque inválido!" << endl;
		}
		else if (valorSaque <= 500){
			
			saldoFinal = 500 - valorSaque;
			cout<<"Olá "<<nomeUsuario<< ", saque de R$ "<< valorSaque<< " realizado com sucesso e seu saldo atual é de R$ "<< saldoFinal <<  "" << endl;
		}
	}

	
	cin.get();
	return 0;
}

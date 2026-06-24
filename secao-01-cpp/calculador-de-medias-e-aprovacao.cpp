#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	string nomeAluno;
	float nota1, nota2, mediaNotas;
	
	cout << "Digite o seu nome: " << endl;
	getline(cin, nomeAluno);
	
	cout << "Digite a nota da sua primeira prova: " << endl;
	cin >> nota1;
	
	cout << "Digite a nota da sua segunda prova: " << endl;
	cin >> nota2;
	
	mediaNotas = (nota1 + nota2) /2;
	
	if (mediaNotas >= 7) {
		
		cout << "Parabéns pelo esforço " << nomeAluno << ", você foi APROVADO com média  " << mediaNotas << "\n" << endl;
		
	}
	else {
		
		cout << "Sua média é " << mediaNotas << ", e infelizmente foi REPROVADO e está em RECUPERAÇÃO! \n";
		
	}
	
	
	cin.get();
	return 0;
}

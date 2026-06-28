#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vidaPersonagem, opcaoMenu;
	
	vidaPersonagem = 100;
	
	do {
		
	cout << "\nVida atual: " << vidaPersonagem << endl;
	cout << "1 - Tomar Poção (+20 HP)" << endl;	
	cout << "2 - Levar Ataque de monstro (-30 HP)" << endl;	
	cout << "0 - Sair do Jogo" << endl;
	cin >> 	opcaoMenu;
	
	if (opcaoMenu == 1) {
		
		vidaPersonagem = vidaPersonagem + 20;
		cout << "\nVocê curou seu personagem e agora sua vida é de "<< vidaPersonagem << endl;
		
		if (vidaPersonagem >= 400 ){
			
			cout << "==============================================================================" << endl;
			cout << "\nVocê atingiu a vida máxima, e voltou a 100 HP para melhorar o desafio !! XD\n " << endl;
			vidaPersonagem = 100;
			cout << "==============================================================================" << endl;
			system("pause");
			
		}
		
	}
	else if (opcaoMenu == 2) {
		
		vidaPersonagem = vidaPersonagem - 30;
		cout << "\nVocê recebeu um ataque e agora sua vida é de "<< vidaPersonagem << endl;
		
		if (vidaPersonagem <= 0) {
			
			cout << "==============================================================================" << endl;
			cout << "Você morreu mané, tente novamente !!!" << endl;
			cout << "==============================================================================" << endl;
			return 1;
		}
	}
	else if (opcaoMenu > 2 || opcaoMenu < 0){
		
		cout << "\nOpção Inválida, tente novamente !\n" << endl;
		system("pause");
		
		
	}
	
	
	
	
	
		
	} while (opcaoMenu != 0);
	
	
	
	
	system("pause");
	return 0;
}

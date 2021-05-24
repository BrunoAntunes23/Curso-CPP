// Calculadora simples.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	int soma, sub, div, mult, n1, n2;
	cout << "prototipo simples de calculadora" << endl;
	cout << "digite o primeiro valor" << endl;
	cin >> n1;
	cout << "digite o segundo valor" << endl;
	cin >> n2;
	soma = n1 + n2;
	sub = n1 - n2;
	div = n1 / n2;
	mult = n1 * n2;
	

	cout << "o resto da divisao e" << n1 % n2 << endl;
	if (n1 % n2 == 0) {
		cout << "numero par" << endl;
		if (n1 >= 100)
			cout << "o valor de N1 é maior ou igual a 100" << endl;
		if (n1 < 100)
			cout << "o valor de N!é menor que 100" << endl;
	}
	else {
		cout << "numero impar" << endl;
		if (n1 >= 100)
			cout << "o valor de N1 é maior ou igual a 100" << endl;
		if (n1 < 100)
			cout << "o valor de N!é menor que 100" << endl;
	}



	






	


	system("pause");
	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

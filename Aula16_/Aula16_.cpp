// Aula16_.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include<iomanip>

using namespace std;

int main()
{
	int a = 0;
	short int b = 0;
	long int c = 0;
	int a2 = 0;
	signed int b2 = -10;
	unsigned int c2 = -10;

	cout << sizeof(a)<<"-"<<a << endl;
	cout << sizeof(b) <<"-"<<b<< endl;
	cout << sizeof(c) <<"-"<<c<< endl;
	cout << sizeof(a2)<<"-"<<a2 << endl;
	cout << sizeof(b2)<<"-" <<b2<< endl;
	cout << sizeof(c2) <<"-"<<c2 <<endl;

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

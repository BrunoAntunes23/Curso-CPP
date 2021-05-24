// aula01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
	/*int Vint = 13;
	char L ='b';
	double p_flutuante = 13.78;
	cout << "o valor é " << Vint << endl;
	cout << "o valor de L " << L << endl;
	cout << "o valor de double é " << p_flutuante << endl;

	cout << "memoria da variavel Vint " << sizeof(Vint) << endl;
	cout << "memoria L " << sizeof(L) << endl;
	cout << "memoria p_flutuante " << sizeof(p_flutuante) << endl;
	cout <<hex<< 10 + 50 << endl;
	cout << setw(500) << 10 + 50 << endl;
	cout << 10 << endl;*/
	//operador de estraxão (print)
	cout << " informe um numero" << endl;
	int num1 = 0;
	cin >> num1;
	cout << "o numero é "<<num1 << endl;
	cout << endl;
	cout << "insira seu nome" << endl;
		wchar_t nome;
		cin>>nome;


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

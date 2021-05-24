// Media.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    double nota1, nota2, nota3, nota4,media;
    cout << "digite a nota do semestre" << endl;
    cin >> nota1;
    cout << "digite a nota do semestre" << endl;
    cin >> nota2;
    cout << "digite a nota do semestre" << endl;
    cin >> nota3;
    cout << "digite a nota do semestre" << endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (media >=7 ) {

        cout << "sua media e: " << media <<"passou de ano"<< endl;
    }
    else {
        cout << "sua media "<<media<<" é inferior ao nescessario para passar de ano" << endl;
    }
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

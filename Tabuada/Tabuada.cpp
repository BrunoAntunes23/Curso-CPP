// Tabuada.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int Vtab,cont,x=0;
    cout << "insira o valor da tabuada que deeja ver" << endl;
    cin >> Vtab;
    for (cont = 0; cont <= 10; cont++)
    {
        cout << Vtab << " X " << cont << " = " << Vtab * cont << endl;


    };
    /*while (x<=1040)
    {
        cout << " o valor de e " << x << endl;
        x += 13;
    }*/
    int x2 = 0;
    do {
        x2++;
        cout << "ola" << endl;
             
        } while (x2 < 10);
        int opc;
        cout << "insira a opcao" << endl;
        cin >> opc;

        switch(opc)
        {   case 1:
            cout << "zero um" << endl;
            break;

        case 2:
            cout << "zero dois" << endl;
            break;
        default:
            cout << "opcao nao encontrada" << endl;
            break;
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

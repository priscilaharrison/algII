// Ex02.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculo(int a, int b, int c)
{
	int resultadoR = pow((a + b), 2); 
	

	int resultadoS = pow((b + c), 2);

	float resultado = (resultadoR + resultadoS) / 2;
	return resultado;
}
int main()
{
	int n1, n2, n3;
	printf("Digite o primeiro numero inteiro: \n");
	scanf_s("%i", &n1);

	printf("Digite o segundo numero inteiro: \n");
	scanf_s("%i", &n2);

	printf("Digite o terceiro numero inteiro: \n");
	scanf_s("%i", &n3);

	printf("O resultado e : \n %f", calculo(n1, n2, n3), "\n");

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

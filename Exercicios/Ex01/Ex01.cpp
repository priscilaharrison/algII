// Ex01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculoDeDistancia(float x1, float y1, float x2, float y2)
{
	float resultado = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return resultado;
}

	


int main()
{
	float pontox1, pontoy1, pontox2, pontoy2, resultado;
	printf("Digite um valor para Px1: \n");
	scanf_s("%f", &pontox1);
	printf("Digite um valor para Py1: \n");
	scanf_s("%f", &pontoy1);
	printf("Digite um valor para Px2: \n");
	scanf_s("%f", &pontox2);
	printf("Digite um valor para Py2: \n");
	scanf_s("%f", &pontoy2);
	
	resultado = CalculoDeDistancia(pontox1, pontoy1, pontox2, pontoy2);
	
	printf("A distancia entre os pontos e: %f ", resultado);

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

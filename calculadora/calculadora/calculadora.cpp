// calculadora.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"

#include <stdio.h>
#include <stdlib.h>

int n1, n2, resultado;
char operador;
float Soma(int n1, int n2)
{
	return n1 + n2;
}

float Subt(int n1, int n2)
{
	return n1 - n2;
}

float Mult(int n1, int n2)
{
	return n1 * n2;
}

float Div(int n1, int n2)
{
	if (n2 == 0)
		return 0;
	return n1 / n2;
}

float main()

{
	

	printf("Digite um número: \n");
	scanf_s("%f", &n1);

	printf("Digite o operador: ( + - * / )\n");
	scanf_s("%c", operador);

	printf("Digite outro número: \n");
	scanf_s("%f", &n2);

	if (operador == '+')
	{
		resultado = Soma(n1, n2);
		printf("A soma de %f e %f é: %f", n1, n2, resultado);
	}
	else
		if (operador == '-')
		{
			resultado = Subt(n1, n2);
			printf("A Subtração de %f e %f é: %f", n1, n2, resultado);
		}
		else
			if (operador == '*')
			{
				resultado = Mult(n1, n2);
				printf("A mutiplicação de %f por %f é: %f", n1, n2, resultado);
			}
			else
				if (operador == '/')
				{
					resultado = Div(n1, n2);
					printf("A divisão de %f por %f é: %f", n1, n2, resultado);
				}
				else
					printf("Operador inválido!");
					
	


 
	

	system("pause");
	return 0;


	
}


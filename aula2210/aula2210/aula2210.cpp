// aula2210.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


#include "pch.h"
#include <stdio.h>
#include <stdlib.h>




int MaiorValorInteiro(int a, int b, int c, int d)
{
	int maior = a;
	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d);
	{
		maior = d;
	}
	return maior;
}

int LerValorInteiro()
{
	int valor = 0;

	printf("Digite um numero inteiro: ");
	scanf_s("%i", &valor);
	return valor;

}

float LerValorReal()
{
	float valor = 0;
	printf("Digite um numero real (utilizando ponto): ");
	scanf_s("%f", &valor);
return valor;
}

float MediaDosValores(float a, float b, float c, float d)
{
	float soma = a + b + c + d;
	float media = soma / 4;

	return media;

}

void ImprimeValoresMaioresQueMedia(float a, float b, float c, float d)
{
	float media = MediaDosValores(a, b, c, d);
	printf("O valor da media eh: %f\n", media);

	bool encontreiValorMaior = false;

	if (a > media)
	{
		printf("%.3f ", a);
	}
	if (b > media)
	{
		printf("%.3f ", b);
	}
	if (c > media)
	{
		printf("%.3f ", c);
	}
	if (d > media)
	{
		printf("%.3f ", d);
	}
}

void InformarParOuImpar(int a)
{
	if ((a % 2 == 0)) //
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
}

void ExemploSwitch()
{
	printf("Escolha uma opcao: \n");
	printf("1 -a\n - b\n3 - c\n4 - d\n");
	int op = 0;
	scanf_s("%i", &op);

	switch (op)
	{
	case 1:
		printf("Voce escolheu a\n");
		break;
	case 2: 
		printf("Voce escolheu b\n");
		break;
	case 3:
		printf("Voce escolheu c\n");
		break;
	case 4:
		printf("Voce escolheu d\n");
		break;

	default:
		printf("Opcao Invalida\n");
		break;
	}

}

int main()
{
	int primeiro = LerValorInteiro();
	int segundo = LerValorInteiro();
	int terceiro = LerValorInteiro();
	int quarto = LerValorInteiro();

	int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);
	printf("O maior valor encontrado foi: %i\n\n", m);

	float primeiroReal = LerValorReal();
	float segundoReal = LerValorReal();
	float terceiroReal = LerValorReal();
	float quartoReal = LerValorReal();
	
	ImprimeValoresMaioresQueMedia(primeiroReal, segundoReal, terceiroReal, quartoReal);

	printf("\n\n");
	InformarParOuImpar(5);
	InformarParOuImpar(10);
	InformarParOuImpar(3);
	InformarParOuImpar(6);
	ExemploSwitch;
	
	system("pause");


	return 0;
}


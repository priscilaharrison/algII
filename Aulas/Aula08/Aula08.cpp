// Aula08.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


/*
Comentario longo, bloco
(mais de uma linha)
*/

#include "pch.h" //inclusao de biblioteca
//C ANSI
//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//variáveis (Globais, visiveis em todo código)
int a; //inteiro
float b; //real (ponto flutuante)
double c; //real (maior precisao)
bool d; //booleano (verdadeiro/falso) (true/false)


int main()
{
	//Variável local (visivel somente nesta função, a partir dessa linha)
	int e; 

	//comando para escrever na tela
	// \n dentro de aspas, pula linha
	// \t dentro de aspas, da um tab
	printf("Hello world!\n");

	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("\n");

	//como imprimir valores
	printf("%i\n", 99);
	printf("%f\n", 100.01);

	//texto (string) e valores juntos
	printf("Aqui vai o valor %i, total da soma.\n", 98 + 5);

	printf("%i + %i = %i\n", 500, 600, 500 + 600);

	printf(" Por algum acaso esqueci o valor daqui: %i\n");
	
	//atribuição
	a = 150;
	e = 275;
	int f = a + e;
	printf(" O resultado da soma e: %i\n ", f);


	system("pause");
    
}


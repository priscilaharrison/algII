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

	system("pause");
    
}


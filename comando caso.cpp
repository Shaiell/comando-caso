#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() {

	int idade;
	float valor;

	setlocale(LC_ALL, "Portuguese");

	printf("Informe a idade\n");
	scanf_s("%i", &idade);

	switch (idade)
	{
	case 0:   10;
		valor = 180.00;
		break;
	case 11:  39;
		valor = 150.00;
		break;
	case 40:  60;
		valor = 195.00;
		break;

	default:

		valor = 230.00;
		break;
	}

	printf("O valor do convenio é:R$" "%.2f\n\n", valor );

}


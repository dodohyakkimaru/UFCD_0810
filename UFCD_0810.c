/*
// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio01() {
	int numvetor[5];

	numvetor[0] = 0;
	numvetor[1] = 1;
	numvetor[2] = 2;
	numvetor[3] = 3;
	numvetor[4] = 4;

	for(int i=0;i<5;i++){
	printf("O valor do indice: %d\n", numvetor[i]);
	}
}
void exercicio02() {
	int numvetor[5], num;


	for (int i = 0;i < 5;i++) {
		printf("Qual o valor do indice %d que deseja?:\n", i);
		scanf("%d", &num);

		numvetor[i] = num;

		printf("\nO valor do indice %d e %d\n", i, numvetor[i]);
		printf("\n");
	}
	
}
void exercicio04() {
	int numvetor[5], num = 0;

	for (int i = 0;i < 5;i++) {

		do {
			printf("Qual o valor do indice %d que deseja?:\n", i);
			scanf("%d", &num);

		} while (num == 1);

		numvetor[i] = num;
	}
	for (int x = 0;x < 5;x++) {
		printf("\nO valor do indice %d: %d\n", x, numvetor[x]);
		printf("\n");
	}
}
void exercicio05() {
	int numvetor[5], num;


	for (int i = 0;i < 5;i++) {
		printf("Qual o valor do indice %d que deseja?:\n", i);
		scanf("%d", &numvetor[i]);
	}

	for (int i = 0;i < 5;i++) {
		printf("O valor do indice %d: %d\n", i, numvetor[i]);

		if (numvetor[i] == 5){
			printf("Este tem o valor 5");
		}

	}
}
//função para  verificar numeros iguais no vetor e devolver true ou false
int verificanum(int vetor[5], int num) {
	for (int i = 0; i < 5; i++)
	{
		if (vetor[i] == num) {
			return 1;
		}
	}
	return 0;
	
}
int calc_media(int vetor[5]) {
	float soma = 0;

	for (int i = 0; i < 5; i++)
	{
		soma += vetor[i];
	}

	printf("Media dos numeros no vetor: %f", (soma/5));

}
void exercicio06() {
	int vetor[5];

	for (int i = 0; i < 5; i++)
	{
		int num = 0;
		
		do {
			printf("Digite o numero: ");
			scanf("%d", &num);

		} while (verificanum(vetor, num)==1);

		vetor[i] = num;
	}
	calc_media(vetor);
}
void exercicio07() {
	int matriz[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Digite o valor de %d %d\n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Valor da linha %d e colunar %d\n", i, j, matriz[i][j]);
		}
	}
}


void main() {
	//exercicio01();
	//exercicio02();
	//exercicio04();
	//exercicio05();
	//exercicio06();
	//exercicio07();
}*/
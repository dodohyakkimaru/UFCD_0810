//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*
//void teste_ponteiro() {
//	int x = 1, y = 2;
//	//variavel do tipo ponteiro
//	int* p;
//
//	//apontando o p para o endereço do x o & aponta o local
//	p = &x;
//
//	printf("Valor de p: %d ", *p);
//
//	y = *p;
//	//depois de declarar p = posição em memoria *p = valor atribuido nele
//	//o p sozinho é o endereço, mas se eu colocar * antes eu consigo usar o valor e não a posição
//	printf("Valor de y: %d ", y);
//}
//void exercicio01() {
//	int num1 = 7;
//	int *num2;
//
//	num2 = &num1;
//
//	printf("Valor de num1: %d\n ", num1);
//	printf("Valor de num2: %d\n ", num2);
//	printf("Valor de num2: %d\n ", *num2);
//}
//void exercicio02() {
//	//declaracao variavel normal
//	int valor1 = 5;
//	float valor2 = 10.5;
//	char letra = 'a';
//
//	//variaveis tipo ponteiro
//	int *p_valor1;
//	float *p_valor2;
//	char *p_letra;
//
//	//associação dos ponteiros a variaveis!
//	p_valor1 = &valor1;
//	p_valor2 = &valor2;
//	p_letra = &letra;
//
//	//mostra os valores apontados *VALORES* e não posição, por conta do *
// 	printf("Valor de valor1: %d \n", *p_valor1);
//	printf("Valor de valor2: %.2f \n", *p_valor2);
//	printf("Valor de letra: %c \n", *p_letra);
//
//	//ou seja utilizar o apontar *p_valor1 = 1 ou valor1 = 1 ambos vão atualizar para um, ou seja o apontador atualiza automaticamente a variavel original
//	// & indica a posição
//	*p_valor1 = 31;
//	*p_valor2 = 1.5;
//	*p_letra = 'c';
//
//	printf("Valor de valor1: %d \n", valor1);
//	printf("Valor de valor2: %.2f \n", *p_valor2);
//	printf("Valor de letra: %c \n", *p_letra);
//}
//void exercicio03() {
//	int x = 5, y = 7;
//
//	if (&x > &y){
//		printf("O Valor de x  e maior que y: x:%d y:%d", &x, &y);
//	}
//	else {
//		printf("O Valor de y  e maior que x: x:%d y:%d",&y , &x);
//	}
//}	
//*/
//
////orientado objeto --Precisa do typedef para definir como uma variavel ao final da estrutura struct
//typedef struct Atleta
//{
//	int ID;
//	char nome[30];
//	int idade;
//	float peso;
//}Atletas;
//
//void main() {
//	//teste_ponteiro();
//	//exercicio01();
//	//exercicio02();
//	//exercicio03();
//	
//	//para não ter que escrever struct o tempo todo usa uma variavel declarada já lá "Atletas"
//	Atletas atleta1 = {1, "joao",13, 50.1};
//	//Declaração de uma Struct(invocar ela)
//	struct Atleta atleta2 = { 2, "maria",18, 30.1 };
//
//	//aceder o atleta3
//	struct Atleta atleta3; 
//
//	atleta3.ID = 3;
//	atleta3.idade = 33;
//	//para strcpy para tratar textos
//	strcpy(atleta3.nome, "Pedro");
//	atleta3.peso = 80;
//
//	//criar uma variavel tipo vetor do struct
//
//	struct Atleta registros[10] =
//	{
//		{1, "joao",11, 50.1},
//		{2, "maria",12, 50.1},
//		{3, "jorge",13, 50.1},
//		{4, "jota",14, 50.1},
//		{5, "jogao",15, 50.1},
//		{6, "josé",16, 50.1},
//		{7, "joselito",17, 50.1},
//		{8, "joelson",18, 50.1},
//		{9, "joe",19, 50.1},
//		{10, "josh",20, 50.1}
//	};
//}	

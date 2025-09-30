//// instrução para permitir ultrapassar a mensagem de erro
//
//// do scanf()
//
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//
//struct Carro
//{ 
//	char marca[25];
//	char modelo[25];
//	char cor[20];
//};
//
//struct Produto
//{
//	int ID;
//	char nome[25];
//	float preco;
//};
//void main() {
//
//	struct Carro registros_carros[25];
//	struct Produto registros_produtos[25];
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("\nInserir registro do carro %d:\n", i);
//
//	//	printf("Digite a marca:\n ");
//	//	scanf("%s", registros_carros[i].marca);
//
//	//	printf("Digite a modelo:\n ");
//	//	scanf("%s", registros_carros[i].modelo);
//
//	//	printf("Digite a cor:\n ");
//	//	scanf("%s", registros_carros[i].cor);
//	//}
//
//	//for (int i = 0; i < 3; i++)
//
//	//{
//	//	printf("\nCarro de registro %d:\n", i);
//
//	//	printf("A marca %s: ", registros_carros[i].marca);
//
//	//	printf("A modelo %s: ", registros_carros[i].modelo);
//
//	//	printf("A cor %s:\n ", registros_carros[i].cor);
//	//
//	//}
//
//	//produtos
//
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("\nInserir o produto de registro %d:\n", i);
//
//		printf("Digite o ID:\n ");
//		scanf("%d", &registros_produtos[i].ID);
//
//		printf("Digite o nome:\n ");
//		scanf("%s", registros_produtos[i].nome);
//
//		printf("Digite o preco:\n ");
//		scanf("%f", &registros_produtos[i].preco);
//	}
//
//	for (int i = 0; i < 3; i++)
//
//	{
//		printf("\nProduto de registro %d:\n", i);
//
//		printf("O ID %d: ", registros_produtos[i].ID);
//
//		printf("O nome %s: ", registros_produtos[i].nome);
//
//		printf("O preco %.2f:\n ", registros_produtos[i].preco);
//
//	}
//	
//}

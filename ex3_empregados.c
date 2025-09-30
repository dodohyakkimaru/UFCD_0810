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
//struct Empregado
//{
//	char nome[50], cargo[50];
//	int idade;
//	float salario;
//};
//
//void imprime_pessoa(struct Empregado registro){
//
//	printf("\nNome: %s\n", registro.nome);
//	printf("Cargo: %s\n", registro.cargo);
//	printf("Idade: %d\n", registro.idade);
//	printf("Salario: %f", registro.salario);
//	
//}
//
//
//
//
//int main() {
//
//	struct Empregado registrar_empregados[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		//buffer, limpar os dados em memoria
//		fflush(stdin);
//
//		printf("\nDados do empregado %d:\n", i + 1);
//
//		printf("Nome: \n");
//		scanf("%s", registrar_empregados[i].nome);
//
//		printf("Cargo:\n");
//		scanf("%s", registrar_empregados[i].cargo);
//
//		printf("Idade: \n");
//		scanf("%d", &registrar_empregados[i].idade);
//
//		printf("Salario:\n");
//		scanf("%f", &registrar_empregados[i].salario);
//
//
//	}
//
//	for (int i = 0; i < 3; i++)
//	{	
//		printf("\nDados do empregado %d:", i + 1);
//		imprime_pessoa(registrar_empregados[i]);
//		printf("\n");
//	}
//};
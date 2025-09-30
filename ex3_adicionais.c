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
//struct Animal
//{
//	int ID;
//	char nome[25];
//	int idade;
//	float peso;
//};
//struct Veterinario
//{
//	int ID;
//	char nome[25];
//	int idade;
//	char cidade[30];
//};
//
//void mostrar_animal(struct Animal registos){
//	fflush(stdout);
//
//	printf("\nAnimal ID: %d\n", registos.ID);
//
//	printf("\nNome do animal: %s\n", registos.nome);
//
//	printf("\nIdade do animal: %d\n", registos.idade);
//
//	printf("\nPeso do animal: %f\n", registos.peso);
//}
//
//void mostra_veterinario(struct Veterinario veterinario){
//	printf("Dados do veterinario\n");
//	printf("ID:%d \n", veterinario.ID);
//	printf("Nome:%s \n", veterinario.nome);
//	printf("Idade:%d \n", veterinario.idade);
//	printf("Cidade:%s \n", veterinario.cidade);
//	printf("\n");
//};
//void ex_01(){
//	struct Animal registos_animais[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("\nAnimal ID: %d\n", i+1);
//
//		printf("Digite o ID:");
//		scanf("%d", &registos_animais[i].ID);
//
//		printf("Digite o nome do animal:");
//		scanf("%s", &registos_animais[i].nome);
//
//		printf("Digite a idade do animal:");
//		scanf("%d", &registos_animais[i].idade);
//
//		printf("Digite o peso do animal:");
//		scanf("%f", &registos_animais[i].peso);
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		mostrar_animal(registos_animais[i]);
//	};
//};
//
//void ex_02() {
//
//	struct Veterinario registar_veterinarios[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("Veterinario %d\n", i+1);
//
//		printf("Preencha os dados a seguir:\n");
//
//		printf("ID:");
//		scanf("%d", &registar_veterinarios[i].ID);
//
//		printf("Nome:");
//		scanf("%s", &registar_veterinarios[i].nome);
//
//		printf("Idade:");
//		scanf("%d", &registar_veterinarios[i].idade);
//
//		printf("Cidade:");
//		scanf("%s", &registar_veterinarios[i].cidade);
//		printf("\n");
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		mostra_veterinario(registar_veterinarios[i]);
//	}
//}
////**********************************************************
//int main() {
//
//	//ex_01();
//	ex_02();
//	
//};
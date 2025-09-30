//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Data
//{
//	int dia, mes, ano;
//};
//
//union um_valor {
//	int val_int;
//	float val_float;
//	double val_double;
//};
//
//struct Pessoa {
//	int ID;
//	char p_nome[25];
//	char u_nome[25];
//	//Ligando as duas
//	struct Data data_nasc;
//	//union só escolhe 1 dentre essas
//	union um_valor peso;
//};
//void main() {
//	struct Pessoa p1 = { 1, "Douglas","Matias",{30,01,2000} };
//
//	//exibir os dados da pessoa (c/estrutura ligada)
//	printf("ID: %d\n", p1.ID);
//	printf("Nome: %s\n", p1.p_nome);
//	printf("Sobrenome: %s\n", p1.u_nome);
//	printf("Data de nascimento: %d/%d/%d\n", p1.data_nasc.dia, p1.data_nasc.mes, p1.data_nasc.ano);
//
//	//PROFESSOR fez o flamigerado metodo para inserir os dados, mas é igual
//	//***********************************************************************//
//	//Union só guarda o ultimo recebido, apesar de ter 3, ele ignora o 1 após atribuir 3
//
//	p1.peso.val_int = 1;
//	p1.peso.val_double = 3;
//
//	printf("Peso val_int: % d\n", p1.peso.val_int);
//	printf("Peso val_float: %f\n", p1.peso.val_float);
//	printf("Peso val_double: %f\n", p1.peso.val_double);
//}
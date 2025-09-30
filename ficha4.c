// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1(){
	//inicializar o ficheiro e colocar no modo abertura
	FILE* fp;
	char linha[1000];//para armazenar o conteudo das linhas lidas

	//A funcão fopen tem 2 parametros:
	//parametro 1 - localização do arquivo
	//parametro 2 - se é ler, adicionar etc, r,w
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Não existe esse arquivo!");
		exit(1);
	}
	else {
		printf("Ficheiro aberto com sucesso!");

		//ler tudo
		while (fgets(linha, 1000, fp) != NULL) { //Enquanto houver ou seja, não chegar ao fim
			printf("%s", linha);
		}
	}
	fclose(fp);//o que será?
}

void exercicio2() {

	FILE* fp;
	char linha[1000];//para armazenar o conteudo das linhas lidas


	if ((fp = fopen("ficheiro1.txt", "a")) == NULL) { // a = append (adicionar) w = reescreve
		printf("Impossivel criar/abrir esse arquivo!");
		exit(1);
	}
	else {
		char texto[50] = "Slc pai, o pai ta on\n";
		fputs(texto, fp);
	}

	fclose(fp);//fechando
}

void exercicio3() {
	//inicializar o ficheiro e colocar no modo abertura
	FILE* fp;
	char linha[1000];//para armazenar o conteudo das linhas lidas

	//A funcão fopen tem 2 parametros:
	//parametro 1 - localização do arquivo
	//parametro 2 - se é ler, adicionar etc, r,w
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Não existe esse arquivo!");
		exit(1);
	}
	else {
		fputs("Isso e uma experiencia utilizando o tema de acesso a informacao de forma direta", fp);

		//funcao fsekk serve para posicionar o cursor no meio 

		// 3 parametros --> parametro 1 = ficheiro qual estou falando
		// parametro 2 --> quantos caracteres
		//parametro 3 --> qual a posicao (INICIO, especifico OU FIM)
		fseek(fp, 0, SEEK_SET);//COLOCA O CURSOR NO COMEÇO

		//funcao fgets para obter os dados
		fgets(linha, 60, fp);

		//mostrar o que foi inserido
		printf("Antes de usar a funcao fseek: \n %s \n\n", linha);

		//UTILIZA a funcao fseek para colocar a leitura da informacao no caracter 25
		fseek(fp, 25, SEEK_SET);

		//funcao fgets para obter os dados a partir do anterior ele quer os 10 proximos
		fgets(linha, 10, fp);

		//SEEK_SET = INICIO SEEK_CUR = ONDE ELE ESTAVA PELA ULTIMA VEZ SEEK_END = No final

		//mostrar o que foi inserido
		printf("Antes de usar a funcao fseek: \n %s \n\n", linha);

		fseek(fp, -10, SEEK_CUR);

		printf("Depois de usar o Seek_cur e retirar 10 caracteres na posicao atual: \n %s \n\n", linha);
	}
}

void main() {
	//exercicio1();
	//exercicio2();
	exercicio3();
}
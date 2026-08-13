#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Exercício 01
	
	/*
	int a1, b1, aux1; // aux é uma variável de auxiliar
	
	printf("\nInversao de numeros\n");
	
	printf("Insira o Primeiro valor: ");
	scanf("%d", &a1);
	
	printf("Insira o Segundo valor: ");
	scanf("%d", &b1);
	
	aux1 = a1;  // manipulação do valor na memória
	a1 = b1; // isso é muito importante para trocar os valores na memória
	b1 = aux1;
	
	printf("%d \n %d \n--------------------------------\n", a1, b1); // exibe na tela os números na ordem invertida (exercício 1)
	
	//Exercício 6
	
	printf("\n Conversor de idade para anos, meses e dias\n");
	
	int a6, aux6, anos, dias, meses, vendas;
	
	printf("Insira a sua Idade: ");
	scanf("%d", &a6);
	
	aux6 = 365;
	anos = a6;
	meses = 365/30;
	dias = a6*aux6;
	
	printf ("A sua idade em dias: %d; em meses: %d; em anos: %d. \n ---------------------------------------\n", dias, meses, anos);
	
	
	
	//Exercício 4
	
	printf("\n Calculo de salario + comissoes\n");
	
	int a4, b4, salario, vendas;
	float comissao, vt;
	
	printf("Insira o seu salario fixo: ");
	scanf("%d", &a4);
	
	printf("Insira o valor total em vendas: ");
	scanf("%d", &b4);
	
	salario = a4;
	vendas = b4;
	comissao = b4*0.15;
	vt = salario+comissao;
	
	printf("O seu salario total e: %.2f", vt);
	
	*/
	
	//Exercício 5
	
	printf("\nSoma, media e produto de 4 valores\n");
	
	float a5, b5, c5, d5, soma, media, produto; 
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &a5);
	printf("Insira o segundo valor: ");
	scanf("%f", &b5);
	printf("Insira o terceiro valor: ");
	scanf("%f", &c5);
	printf("Insira o quarto valor: ");
	scanf("%f", &d5);
	
	soma = a5+b5+c5+d5;
	media = soma/4;
	produto = a5*b5*c5*d5;
	
	printf("A soma e = %.; a media e = %d ; o produto e = %d.", soma, media, produto);
	
	return 0;
}

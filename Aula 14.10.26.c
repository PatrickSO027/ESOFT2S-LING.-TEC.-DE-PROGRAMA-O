#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Elabore um programa que peca ao usuario para digitar 10 numeros
// que sejam inteiros positivos, e ignore os negativos. e mostre
// na tela o resultado da soma e a media desses valores
// -- OBS: nao precisa usar vetor, usem os lacos da aula de hoje
// while e do-while

int main(){
	
	int soma, i, n;
	
	i = 0;
	while (i<10){
		scanf("%d", &n);
		if (n > 0 ){
			soma += n;
			i++;
		}
	}
	
	printf ("soma = %d e media = %d", soma, (soma/10));

/*

// leia um valor par e mostre sua raiz

int main(int argc, char *argv[]) {
	
	int valor [10], i, cont;
	
	for (i = 0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	printf("Acabou o for");
	
	i = 0;
	while (i<10){
		scanf("%d", &valor[i]);
		i++;
	}
	

/*
	printf("Insira um valor par: ");
	scanf("%d", &valor);

	while (valor%2 == 1){
		printf("\nvalor inserido impar, insira um novo valor: ");
		scanf("%d", &valor);
	}
	
	do {
		printf("Insira um valor par: ");
		scanf ("%d", &valor);
	} while (valor%2 == 1);
	
	printf("a raiz de %d = %f", valor, sqrt(valor));
	
	*/
	
	
	return 0;
}

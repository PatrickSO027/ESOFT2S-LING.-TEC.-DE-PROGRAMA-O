#include <stdio.h>
#include <stdlib.h>

// vamos relembrar algumas estruturas que vimos essa semana


/* Laço FOR repete um conjunto de instrucoes, de um valor
   inicial (inicializacao), ate uma determinada condicao,
   realizando uma operacao (incremento) a cada execucao [sempre] (nao da pra controlar)
   
/*	int i, j, n;
	
	for (i=0, j=1; i<10; i++, j--){
		printf("\nEsse eh o laco FOR");
	}
*/
	
/* Laço WHILE (enquanto), que testa se uma condição é verdadeira,
   caso seja executa um bloco de comandos repetindo o processo 
   enquanto a condição for avaliada com verdadeira (É UM IF QUE SE REPETE)
   
*/

/*	while (i<10){
		printf("\n%d, laco WHILE", i);
		if(n%2 == 0) i++; // se tirar essa linha o laco while nao vai ter fim, pq nao incrementa automatico igual o laco FOR
	//se n mudar o valor de i, i nunca vai ser maior que 10.
	}	n++;
*/

	
/* Laço DO WHILE, semelhante ao laço while, porém antes de realizar
   a verificação ele executa o conjunto de instruções para
   após a verificação da condição (é a inversão do processo)
*/

/*	do{
		printf("\n%d, laco DO", i);
		if (n%2 == 0) i++;
		n++;
	}	while (i<10);
*/


	//Exercicio 1:
	/* Elabore um programa que permita a entrada de 3 valores.
	E conte do primeiro valor inserido, até o segundo valor com o 
	passo da contagem dado pelo terceiro valor */
	//ex: 1,8,2 >> contar de 1 a 8, com o passo 2 = 3,5,7.
	
void exec1(){
	int inicio, fim, passo;
	
	printf("Insira o valor inicial, final e passo: ");
	scanf("%d %d %d", &inicio, &fim, &passo);
	if(inicio<fim){
		while(inicio<fim){
			printf("|%d|", inicio);
			inicio += passo;
		}
	} else {
		while(inicio<fim){
			printf ("|%d|", inicio);
			inicio -= passo;
		}
	}
}

	//Exercicio 2:
	
	/* Faça um programa que receba um numero n e realize a soma dos 
	n primeiros termos da sequência definida
	[S = 1/2; 1/4; 1/8; 1/16.... N] */

void exec2(){
	
}

	//Exercicio 3:
	/* Crie um programa que exiba na tela, o triângulo de pascal */

void exec3(){
	
}

int main(int argc, char *argv[]) {
	
	int menu;
	
	printf("Insira qual exercicio quer resolver [1][2][3]: ");
	scanf("%d", &menu);
	
	switch(menu){
		
		case 1:
			exec1();
		break;
		case 2:
			exec2();
		break;
		case 3:
			exec3();
		break;
	}
		
	return 0;
}

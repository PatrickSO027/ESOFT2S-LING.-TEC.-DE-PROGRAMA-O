#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que LEIA uma palavra e
 verifique se ela eh um palindromo 

Entrada: ABBA
Saída: ABBA

palíndromo é qualquer palavra, frase, nome ou número 
que se lê exatamente da mesma forma da esquerda para 
a direita e da direita para a esquerda 
(desconsiderando acentos, espaços e pontuação).


*/

int main(int argc, char *argv[]) {
	
	int i, j, palindromo;
	char palavra[30];
	//vetor de char é chamado de string
	//por isso um char vc lê com %c e vetor com %s
	printf("Insira a palavra para verificar se ela eh um palindromo: ");
	scanf("%s", &palavra);
	
	printf("\nA palavra inserida eh %s", palavra); 
	printf("\n");
	for (i=0; i<30 && palavra[i] != '\0'; i++);
	printf("%d", i);
	for(j=i-1, i=0; i<j; i++, j--){
		if (palavra[i] == palavra[j]) palindromo = 1;
		else palindromo = 0;
		printf ("\n%d | %d", i, j);
	}
	
	if(palindromo) printf("A palavra inserida EH um palindromo");
	else printf("A palavra inserida NAO EH um palindromo");
	

	// o '\0' é um caractere de espaço e serve para quando acabar a palavra a condição
	// do laço vira falso porque encontra esse caractere e acaba o laço e mostra somente
	// a palavra
	
	return 0;
}

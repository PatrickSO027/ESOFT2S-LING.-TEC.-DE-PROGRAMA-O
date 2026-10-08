#include <stdio.h>
#include <stdlib.h>

/*
faca um programa que receba 10 valores e compare 
para ver qual deles eh o maior
*/

int compara (int a, int b){
		if(a > b) return a;
		else return b;
	}
	
int main(int argc, char *argv[]) {
	
	int valores[10];
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	//for(inicializacao; verificacao; incremento)
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	
	for(i=1, maior = valores[0]; 1<5; i+=2){
		int temp = compara(valores[i], valores[i+1]);
		maior = compara(maior, temp);
	}
	
	printf("\n %d", maior);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void exec1(){
}

void exec2(){
}

void exec3 (){
	int n;
	printf("\nExercicio 3: Implemente um programa que leia um número n [com n positivo & n <= 64] e mostre na tela o seu valor em base binaria");
	printf("\n\nInsira o valor: ");
	scanf("%d", &n);
}

void exec4(){
}

void exec5(){
}

void exec6(){
}

void exec7(){
}


int main(int argc, char *argv[]) {
	
	int menu;
	
	printf("Esses sao os exercicios disponiveis: \n [1][2][3][4][5][6][7] \nQual deseja resolver? ");
	scanf("%d", &menu);
	switch (menu){
		
	case 1:
		exec1();
	break;
	case 2:
		exec2();
	break;
	case 3:
		exec3();
	break;
	case 4:
		exec4();
	break;
	case 5:
		exec5();
	break;
	case 6:
		exec6();
	break;
	case 7:
		exec7();	
	break;
}
	/*
	int n = 10;
	
	while (n>1){
	printf("%d", n%2); 
	n = n/2;
	}
	*/
	
/*	int n;
	
	printf("insira um numero n: ");
	scanf("%d", &n);
	
	while (n>1){
	vetor3[8] = n%2;
	n = n/2;
	}
	*/
	
	return 0;
}

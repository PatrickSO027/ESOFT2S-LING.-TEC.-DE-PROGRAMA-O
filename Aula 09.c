#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de parametros){
	comandos
	comandos ...
}
*/
void exec3 (){
		/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
		correspondente em dólares. */	
		float reais, cota;
		printf("\nInsira a cotacao e o valor: ");
		scanf("%f %f", &cota, &reais);
		printf("\nO valor %.2f em dolar eh: %.2f", reais, (reais/cota));
}
void exec4 (){
	/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus
		Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e
		C a temperatura em Celsius. */	
		float tempC, tempF;	
		printf("Insira a temperatura: ");
		scanf("%f", &tempC);
		tempF = tempC * (9.0/5.0) + 32;
		printf("\nA temperatura em Fahrenheit eh: ", tempF);
}
void exec8 (){
	/* (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento
		em uma fábrica, e informe-o expresso no formato horas:minutos:segundos. */
		int sec, horas, min;
		printf("Insira o tempo em segundos: ");
		scanf("%d", &sec);	
		horas = sec/3600;
		min = (sec - (horas%3600))/60;
		sec = sec - ((horas*3600)+(min*60));
		printf ("\t %d:%d:%d", horas, min, sec);
}
int main(int argc, char *argv[]) {
	
	int menu;
	printf("Insira qual exercicio quer resolver [3][4][8]: ");
	scanf("%d", &menu);
	
	switch(menu){
	
	case 3:
		exec3();
	break;
	case 4: 	
		exec4();
	break;
	case 8: 
		exec8();
	break;
}
	return 0;
}

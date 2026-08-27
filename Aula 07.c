#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	// se usar "||" funciona como porta OR/OU
	// se usar "&&" funciona como porta AND
	
	/* Construa um programa que receba dois valores e verifica
	se eles são positivos ou negativos, caso sejam positivos,
	verifique se são menores que 10, caso sejam, verifique se 
	são primos, se for, mostre a area e a hipotenusa do triângulo
	formado por eles. Caso não sejam primos, mostre as operações 
	básicas formada entre eles. Caso sejam maiores que 10, mostre
	se são multiplos um pelo outro. Caso não sejam positivos, mostre
	seus inversos.
	*/

int main(int argc, char *argv[]) {
	
	int a, b, r, h, mult, som, sub, div;
	char positivo, negativo;
	
	printf("Codigo HADUKEN\n");
	printf("Entre com os valores de A e B: ");
	scanf("%d %d", &a, &b);
	
	if(a>0 && b>0){
		if(a<10 && b<10){
			if((a==2 || a==3 || a==5 || a==7) && (b==2 || b==3 || b==5 || b==7)){
				r = (a*b)/2;
				h = sqrt((pow(a,2) + pow(b,2)));
				
				printf("A area eh %d e a hipotunesa %d", r, h);
			} else {
				mult = a*b;
				div = a/b;
				som = a+b;
				sub = a-b;
				
				printf("%d + %d = %d, %d - %d = %d, %d * %d = %d, %d / %d = %d.", a, b, som, a, b, sub, a, b, mult, a, b, div);
			}
		} else {
			if(a%b == 0) printf("%d e %d sao multiplos.", a, b); else printf("%d e %d nao sao multiplos.", a, b);
		}
	} else {
		printf("Os inversos de %d e %d sao, respectivamente: %d e %d", a, b, (a*-1), (b*-1));
	}
	
	
	return 0;
}

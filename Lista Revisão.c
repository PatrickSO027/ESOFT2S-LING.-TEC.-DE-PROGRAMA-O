#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exec1(){ //void nao precisa retornar valor, agora inteira precisa devolver um valor inteiro
	
}

void exe2(){
	
}

void exec3(){
	
}

int multdig(int dig, int valor){ //dentro do parenteses so pode declarar a variavel, ent quando for usar, tem que informar os valores
	return dig*valor;
} 

int main(int argc, char *argv[]) {
	
	int menu;
	
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, digv1, digv2, soma, resto1, resto2;
	
	printf("Validador de CPF");
	printf("\nInsira o seu CPF (Com espacamento entre numeros, . e -): ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", 
				&dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &digv1, &digv2);
	
	printf("O seu CPF esta correto: %d %d %d . %d %d %d . %d %d %d - %d %d", 
				dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, digv1, digv2);
	
	soma = multdig(dig1,10)+multdig(dig2,9)+multdig(dig3,8)+
			multdig(dig4,7)+multdig(dig5,6)+multdig(dig6,5)+
			multdig(dig7,4)+multdig(dig8,3)+multdig(dig9,2);
			
	soma *=10;
	resto1= soma%11;
	if (resto1 == 10) resto1 = 0;
	printf ("\nO primeiro digito verificador eh: %d", resto1);
	
	soma = multdig(dig1,11)+multdig(dig2,10)+multdig(dig3,9)+
			multdig(dig4,8)+multdig(dig5,7)+multdig(dig6,6)+
			multdig(dig7,5)+multdig(dig8,4)+multdig(dig9,3)+multdig(digv1, 2);
			
	soma *=10;
	resto2 = soma%11;
	if (resto2 == 10) resto2 = 0;
	printf ("\nO segundo digito verificador eh: %d", resto2);
	
	switch(menu){
		
	case1:
		exec1();
	break;
	case2:
		exec2();
	break;
	case3:
		exec3();
	break;
}
	return 0;
}

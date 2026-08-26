#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, r, valor;
	
	printf("Comparadora de qual numero eh maior.\n");
	printf("Insira tres valores A B C para comparar: ");
	scanf("%d %d %d", &a, &b,&c);
	
	/* maneira mais "burra" de ser feita:
	
	if(a>b){
		r = a;
	}else
	if (b>a){ // aqui da pra cortar e colocar um else para se não for um, vai ser outro
		r = b;
	}
	if (c>r){
		r = c;
	}
	
	há também uma comparação a mais, você percebe que o código tem coisa a mais
	quando você tira algo dele e o funcionamento continua igual.
	*/
	
	
	if(a>b){
		r = a;
	}else {
		r = b;
	}
	if(c>r){
		r = c;
	}
	
	printf ("%d eh o maior\n", r);
	
	printf("Verificar se algum valor eh impar ou par\n");
	printf("Insira o seu valor: ");
	scanf("%d", &valor);
	
	if((valor%2) == 0){
		printf("O valor %d eh par", valor);
	} else
		printf("O valor %d eh impar", valor);
	return 0;
}

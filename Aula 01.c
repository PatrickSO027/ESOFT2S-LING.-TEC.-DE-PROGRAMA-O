#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float a,b,c; // fala pro computador guardar a posição de memória
	
	a = 8; // atribuição de valor, para deixar a informação salva em cada "casinha" na memória
	b = 19;
	c = a/b;
	
	printf("A soma de %f + %f = %f", a,b,c); 
	
	/* O %d é um identificador para quando se tem um número inteiro a ser mostrado na tela (int), quando é um número com vírgula (float) utiliza-se %f, quando
	é um caractére (char) utiliza-se %c, quando é um número com o dobro da capacidade (double) utiliza-se %lf;
	
	A ordem que se tem na string "%d + %d = %c", a,b,c representa de forma respectiva, a ordem a ser exibido os dados;
	
	O "f" do printf significa formatado;
	
	Se quiser fazer uma multiplicação é só colocar um asterisco (*) e para divisão a barra (/) porém, como existe números que inteiros que se dividir da números
	com vírgula, para isso, deve-se trocar o int por float e mudar a formatação do printf; 
	
		float a,b,c;
	
		a = 8; 
		b = 19;
		c = a/b;
		c = a-b;
		c = a+b;
		c = a*b;
		
		printf("A ? de %f ? %f = %f", a,b,c ) = ele manda o ultimo número guardado, pois o programa exercuta de forma linear.
	Se algum processo precisa de outro
	esse outro precisa ser feito antes. Se eu quiser mostrar todos os resultados, posso colocar embaixo do float como: float r1, r2, r3; e o último número 
	deixar como apenas c.	
	*/
	
	return 0;
}

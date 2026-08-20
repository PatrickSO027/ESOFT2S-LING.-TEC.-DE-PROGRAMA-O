#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//abs refere-se a funcao modulo da matematica (valor absoluto, positivo)
	//enquanto a % refere-se ao modulo (resto da divisao)
	//& refere-se a endereco de memoria
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	//poderia fazer com "unsigned int abs;", que e um valor sem atribuicao, de 0 ate um valor sem sinal
	//e depois na conta falar que abs recebe (a-b)
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	
	maior_temp1 = (a+b+abs(a-b))/2; //compara os dois primeiros
	maior_temp2 = (c+d+abs(c-d))/2; //compara os dois ultimos (se for impar tem que deixar uma variavel sozinha)
	maior = (maior_temp1+maior_temp2+abs(maior_temp1-maior_temp2))/2;
	//o segundo parenteses e para dividir todos por dois, se nao iria dividir apenas a-b por 2
	//o problema da formula "maior = (a+b+abs(a-b))/2;" e que ela compara apenas dois valores, entao se o c for maior, ele nao vai ser considerado
	//na comparacao, sempre faz a comparacao entre dois valores, e depois vai seguindo com dois ate terminar, sempre tem o mesmo padrao de distribuicao
	//nao precisa comparar a-b, a-b, a-c, p2ois quando sai o resultado de um, ja garante que ele e o maior
	printf("O maior entre |%d||%d||%d||%d| = %d", a, b, c, d, maior);
	
	return 0;
}

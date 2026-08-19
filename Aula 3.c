#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Exercicio 3
	
	/*
	int n, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, resultado;
	printf("Entre com o valor para a conversao: ");
	scanf ("%d", &n);
	
	bit_64 = n%2; // O que sobra (ex: 27/2 = 13, sobra 1)
	resultado = n/2; // O que a divisao inteira resulta (ex: 27/2 = 13, resultado final)
	
	bit_32 = resultado%2; 	// na prova no papel a gente da um valor e testa pra ver se vai dar certo
	resultado = resultado/2; // ex: fazer o n valer 52 e testar
	
	bit_16 = resultado%2; 	// o erro está que em nenhum momento o N é substituido, por mais que ele faça a primeira divisao
	resultado = resultado/2; // em todas as outras divisões está sendo o 52 inicial
	
	bit_8 = resultado%2;	
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	// da pra deixar mais facil e curto usando laço de repetição mas isso não será visto por agora.
	
	/* bit_8 = n%2; 0
	resultado = n/2; 26
			52%2 = 0
	bit_4 = n%2;
	resultado = n/2; 26
	
	bit_2 = n%2;
	resultado = n/2;
	
	
	para ficar correto, tem que trocar o n da operação após a primeira para "resultado"
	
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, 
				resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
				
	*/
	
	// Exercicio 8
	
	int x1, x2, y1, y2, p1, p2;
	float dist;
	
	printf("Insira as coordenadas do ponto P1: ");
	scanf("(%d, %d)", &x1, &y1); // formato para ler par ordenado no scan
	
	// precisa lembrar que o usuário pode não entender, então para isso, a entrada do usuario
	// colocar uma mensagem quetem que inserir as coordenadas no formato do ex: (5 , 3)
	// pode colocar um print de leitura para confirmar se os dados que estao sendo utilizados 
	// estao corretos 
	

	printf("Insira as coordenadas do ponto P2: ");
	scanf("(%d, %d)", &x2, &y2);
	
	p1 = pow(x2-x1, 2); // pow significa potencia, o numero 2 depois da virgula refere-se a
	p2 = pow(y2-y1, 2); // qual numero esta sendo elevado

	dist = sqrt(p1+p2); 
	
	printf("Distancia (%f)",dist);

	return 0;
}

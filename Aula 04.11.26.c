#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0

/* vetor só tem uma dimensão, já matriz tem duas ou mais, por isso tem mais de um colchetes */


// aula de hj: campo minado para entender matrizes
// o campo minado vai ser a matriz



int main(int argc, char *argv[]) {
	srand(time(NULL));
	int campo[9][9]; // campo minado
	int casaX, CasaY; // jogada - qual casa o usuario deseja jogar
	int i, j;
	
//antes de preencher com bomba, é necessário limpar o vetor (tirar lixo de memória)	
	
	for (i = 0; i < 9; i++){
		for (j = 0; j < 9; j++){
			campo[i][j] = 9; //9 é o unico valor que não é possível de se ter quando o jogo inicia
		}
	}
	
	
//preenche com bombas nosso jogo	
	for (i = 0; i < 9; i++){ // laço padrão para percorrer o vetor, da para 
//usar um para percorrer uma linha,
//para percorrer todas, cria um outro laço de repetição dentro dele
		for (j = 0; j < 9; j++){ //se o campo não for quadrado, cada for vai percorrer
//uma distância diferente, mas é muito mais comum utilizar matriz quadradas
//se tivesse mais uma dimensão no campo (profundidade)
//teria que ter mais um for e essas operações do laço crescem em
//nivel exponêncial - 10 - 100 - 1000 - 100000....
//é bom sempre reduzir a dimensionalidade dos dados

			if (rand()%10 == 0) //devolve um número aleatório pela quantidade de ciclos (os ciclos mudam pela srand)
				campo[i][j] = 0;
		}
	}
	printf ("Campo Minado \n=======================================================================================================================\n");
	for (i = 0; i < 9; i++){
		printf("\t \t \t"); //tabula para deixar o campo centralizado
		for (j = 0; j < 9; j++){
			if (campo[i][j] == 0)printf("|9");
			else printf ("|%d", campo[i][j]);
			printf("|%d|", campo [i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    //Exercicio 1
    
    int anoatual, idade, anonascimento;

    printf("Calculadora de ano de nascimento\n");
    printf("\nInsira a sua IDADE: ");
    scanf("%d", &idade);

    printf("\nInsira o ANO ATUAL: ");
    scanf("%d", &anoatual);

    anonascimento = anoatual - idade;

    printf("\nSeu ano de nascimento: %d", anonascimento);

    //Exercicio 2

    int km_h, m_s;

    printf("\nConversor de velocidade\n");

    printf("\nInsira a velocidade em KM/H: ");
    scanf("%d", &km_h);

    m_s = km_h / 3.6;

    printf("\nA velocidade em m/s: %d", m_s);

    //Exercicio 3

    float valor_reais, valor_dolar, valor_cotacao;

    printf("\nConversor de moeda");
    
    printf("\nInsira o valor em REAIS: ");
    scanf("%f", &valor_reais);

    printf("\nInsira a COTACAO do DOLAR: ");
    scanf("%f", &valor_cotacao);

    valor_dolar = valor_reais / valor_cotacao;

    printf("\nO valor em DOLAR: %.2f", valor_dolar);

    //Exercicio 4

    float temp_c, temp_f;

    printf("\nConversor de temperatura Celsius -> Fahrenheit");

    printf("\nInsira a temperatura em CELSIUS: ");
    scanf("%f", &temp_c);

    temp_f = temp_c * (9.0/5.0) + 32.0;

    printf("\nA temperatura em FAHRENHEIT: %.1f", temp_f);

    //Exercicio 5

    printf("\nConversor de angulo em graus para radianos\n");

    float angulo_graus, angulo_radianos;

    printf("\nInsira o angulo em GRAUS: ");
    scanf("%f", &angulo_graus);

    angulo_radianos = angulo_graus * (3.141592 / 180.0);

    printf("\nO angulo em RADIADOS: %.2f", angulo_radianos);

    //Exercicio 6

    int numero, antecessor, sucessor;

    printf("\nCalculadora de antecessor e sucessor\n");

    printf("\nInsira um NUMERO: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("\nO antecessor de %d: %d; e o sucessor: %d.", numero, antecessor, sucessor);

    //Exercicio 7

    float importancia, primeiro, segundo, terceiro;

    printf("\nA divisao da importancia entre tres ganhadores de um concurso e: ");

    importancia = 780000.00;
    primeiro = importancia * 0.46;
    segundo = importancia * 0.32;
    terceiro = importancia - (primeiro + segundo);

    printf("\nO valor do primeiro ganhador: %.2f", primeiro);
    printf("\nO valor do segundo ganhador: %.2f", segundo);
    printf("\nO valor do terceiro ganhador: %.2f", terceiro);

    //Exercicio 8

    int horas, minutos, segundos, evento;

    printf("\nCalculadora de tempo de evento"); 
    printf("\nInsira o tempo do evento em SEGUNDOS: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;
    
    printf("%d:%d:%d", horas, minutos, segundos);

    //Exercicio 9

    float horas9, velocidade_media, distancia, litros_gastos;

    printf("Informe o tempo da viagem em HORAS e a velocidade media em KM/H (h km/h): ");
    scanf("%f %f", &horas9, &velocidade_media);

    distancia = horas9 * velocidade_media;
    litros_gastos = distancia / 12;

    printf("\nA quantidade de combustivel gasto na viagem e: %.3f litros", litros_gastos);

    //Exercicio 10

    //abs refere-se a funcao modulo da matematica (valor absoluto, positivo)
	//enquanto a % refere-se ao modulo (resto da divisao)
	//& refere-se a endereco de memoria
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	//poderia fazer com "unsigned int abs;", que e um valor sem atribuicao, de 0 ate um valor sem sinal
	//e depois na conta falar que abs recebe (a-b)
    printf("\nCalculadora do maior entre 4 numeros\n");
	printf("\nInforme os valores a serem comparados: ");
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

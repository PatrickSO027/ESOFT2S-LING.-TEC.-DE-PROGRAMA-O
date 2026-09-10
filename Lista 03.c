#include <stdio.h>
#include <stdlib.h>

// o parametro "()", permite acessar variaveis que nao esta dentro do bloco de codigo atual

//exercicio 7

float calc_inss(float salario,){
	if(salario<=1412.00)return salario*0.075; //quando for apenas 1 comando, pode emitir chave
	else if(salario<=2666.68)return salario*0.09; //dentro da funcao nao utiliza print, scan...
	else if (salario<=4000.03)return salario*0.12; //ela so tem uma unica responsabilididade (eh um principio)
	else return salario*0.14;
}

//exercicio 8

float calc_irpf(float salariobase){
	if(salariobase<=2259.20)return 0;
	else if(salariobase<=2826.65)return salariobase*0.075-164.44;
	else if(salariobase<=3751.05)return salariobase*0.15-381.44;
	else if(salariobase<=4664.68)return salariobase*0.225-662.77;
	else return salariobase*0.275-896.00;
}

//exercicio 9


int main(int argc, char *argv[]) {
	
	float salario, desconto, irpf, salariobase, liquido, valorhoras, horasmes;
	
	printf("Insira o valor da hora trabalhada: ");
	scanf("%f", valorhoras);
	printf("\nInsira a quantidade de horas no MES: ");
	scanf("%f", horasmes);
	
	desconto = calc_inss(salario);
//	printf("DESCONTO = %.2f || %.2f", desconto, calc_inss(salario)); 
	
	salariobase = salario-desconto;
	irpf = calc_irpf(salariobase);
//	printf("\nIRPF = %.2f || %.2f", irpf, calc_irpf(salariobase));

	liquido = salario-desconto-irpf;

	printf("\n==================================================");
	printf("\nRECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)");
	printf("\n==================================================");
	printf("\nSalario Bruto (Horas x Valor): R$ %.2f", salario);
	printf("\n(-) Desconto INSS:             R$ %.2f", desconto);
	printf("\n(-) Desconto IRPF:             R$ %.2f", irpf);
	printf("\n==================================================");
	printf("\nLIQUIDO A RECEBER:             R$ %.2f", liquido);
	printf("\n==================================================");

	return 0;
}

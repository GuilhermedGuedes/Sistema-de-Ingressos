#include <stdio.h>

int main ()

{
	int filme, quantIngressos;
	double valorCompra;
	
	printf("Olá, bem vindo ao sistema de cálculo de compras de ingressos.O valor do ingresso e 12.50\n");
	printf("Escolha a opção de filme:  \n");
	printf("----------Digite 1 : Vigadores 4 - Marvel----------\n");
	printf("----------Digite 2 :Como Treinar o Seu Dragão 3----\n");
	printf("----------Digite 3 :Dumbo--------------------------\n");
	printf("----------Digite 4 :Shazam!------------------------\n");
	scanf("%d",&filme);
	printf("Informe q quantidade de ingresso: \n");
	scanf("%d", &quantIngressos);
	valorCompra=quantIngressos*12.50;
	printf("Obrigada. Para comprar %d ingresso(s) para o filme numero %d voce ira gastar \n R$   %.2f \n ", quantIngressos, filme , valorCompra);
	
	system("pause");
	
	return 0 ;
	
	
	
	
}

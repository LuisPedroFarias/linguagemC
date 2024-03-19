#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL, "");
	
	
	int primeiro_valor, segundo_valor;
	float media, soma, produto, maior_valor, menor_valor ;
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &primeiro_valor);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &segundo_valor);
	
	soma = primeiro_valor + segundo_valor; 
	media = soma / 2;
	produto = primeiro_valor * segundo_valor;
	
	if (primeiro_valor > segundo_valor) {
		maior_valor  = primeiro_valor;
		menor_valor = segundo_valor;
	} else {
		maior_valor = segundo_valor;
		menor_valor = primeiro_valor;
	}
	
	
		printf("\n=== EXIBINDO RESULTADOS ===");
		printf("\nMédia: %.1f  \n", media);
		printf("\nSoma: %.1f \n", soma);
		printf("\nProduto: %.1f \n", produto);
		printf("\nMenor valor: %.1f \n", menor_valor);
		printf("\nMaior valor: %.1f \n", maior_valor);
	
	return 0;
}

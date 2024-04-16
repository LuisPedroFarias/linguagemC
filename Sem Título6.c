#include <stdio.h>
#include <limits.h>
#include <locale.h>

#define TAM 5


int main(){
		setlocale(LC_ALL, ");
	int numero[TAMANHO], somaPositivos = 0 ;
	int i, quantidadeNegativos = 0;

		printf("=== SOLICITANDO DADOS PARA O USÚARIO === \n");	
	for(i = 0; i < TAMANHO; i++){
	   do {
		printf("Insira o %d numero", i + 1);
		scanf("%d", &numero[i]);
	}while (numero[i] < 0 || numeros[i] % 2 == 1);
		
	}
	printf("\n=== EXIBINDO DADOS PARA O USÚARIO NA ORDEM INVERSA === \n");
	for (i = 0; i < TAMANHO; i++){
		printf("%iº número: %i \n", i+1, numeros[i]);

		
	}
	
return 0;	
}

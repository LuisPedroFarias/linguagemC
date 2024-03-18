#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "");
		
		int numero;
		
		printf("Digite um número: ");
		scanf("%i", &numero);
		
		printf("\n=== EXIBINDO RESULTADOS ===\n");
		
		if (numero % 2 == 0){
			printf("Par.");
		} else {
			printf("Ímpar.");
		}
		
		return 0;
}


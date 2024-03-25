#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i, numero, soma = 0;
	
	
	for(i = 1; i <= 5; i++){
		printf("Digite o %i número: ", i);
		scanf("%i", &numero);
			soma = soma + numero;	
	}
	
	printf("\nSoma dos números solicitados: %i \n", soma);
}

#include <stdio.h>
#include <limits.h>
#include <locale.h>

#define TAM 5


int main(){
	
	int contador = 0;
	int numero[TAM];
	
	for(contador = 0; contador < 5; contador++){
		printf("Insira o %d numero", contador + 1);
		scanf("%d", &numero[contador]);
	}
	
	
	
	
	
}

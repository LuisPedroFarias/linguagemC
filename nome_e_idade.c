#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#define SIZE 5

int main(){
				setlocale(LC_ALL, "");
	
	int idade [SIZE];
	int i;
	char nome [SIZE] [200];
	
			printf("Informe o seu nome e idade \n");
			
		for(i = 0; i < SIZE; i++){
			printf("\nDigite %i� nome: ",i+1);
			scanf("%s", &nome[i]);
			
			printf("\nDigite %i� idade: ",i+1);
			scanf("%d", &idade[i]);
			
		system ("cls || clear");
		}			
			printf("\n=== EXIBINDO RESULTADOS ===\n");
		for (i = 0; i < SIZE; i++){
			printf("%i� nome: %s \n", i+1, nome[i]);
			printf("%i� idade: %d \n\n", i+1, idade[i]);
		}		
		
			
return 0;		
}

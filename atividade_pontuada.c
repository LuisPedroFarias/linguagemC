#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define SIZE 5 


int main(){
							
				
				setlocale(LC_ALL, "");
	
	
	int maior_numero = INT_MIN, menor_numero = INT_MAX;
	int qtd_pares = 0, qtd_impares = 0, qtd_positivo = 0, qtd_negativo = 0, numeros_inseridos = 5;			
	int numero[SIZE];
	int i;
	
		for(i = 0; i < SIZE; i++){
			printf("Digite o %iº número: ",i+1);
			scanf("%d", &numero[i]);
		if (numero[i] %2 ==0){
			qtd_pares ++;
		}	else {
			qtd_impares ++;
		}
		}		
			
		if (numero[i] > maior_numero){
			maior_numero = numero[i];
		}	
			
		if (numero[i] < menor_numero){
			menor_numero = numero[i];
		}	
			
			
			
			
				printf("\n=== EXIBINDO RESULTADOS ===\n");
				
		for (i = 0; i < 1; i++){
			printf("Quantidade de números inseridos: %d \n", numeros_inseridos);
			printf("Quantidade de números pares: %d \n", qtd_pares);
			printf("Quantidade de números impares: %d \n", qtd_impares);
			printf("O maior número é: %d \n", maior_numero);
			printf("O menor número é: %d \n", menor_numero);
		}		
		
				
return 0;	
}

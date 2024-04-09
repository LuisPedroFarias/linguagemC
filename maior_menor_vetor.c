#include <stdio.h>
#include <locale.h>
#include <limits.h>


#define SIZE 5

int main(){
			setlocale(LC_ALL, "");
			
			
		int numeros[SIZE], maior_numero = INT_MIN, menor_numero = INT_MAX;
		int i;
		
		
		
			printf("Digite um número abaixo. \n");
		for (i = 0; i < SIZE; i++){
	
			printf("Digite o %d número: ", i+1);
			scanf("%d", &numeros[i]);
			
		
		}	
		
			if (numeros[i] > maior_numero){
				maior_numero = numeros[i];
			} 
			if (numeros[i] > menor_numero){
				menor_numero = numeros[i];
			}	
			printf("\nExibindo resultados ao usúario\n");
			for (i = 0; i < SIZE; i++){
			printf("%d número: %i \n", i+1, numeros[i]);
			
			}
			
			printf("\nMaior número: %d \n", maior_numero);
			printf("\nMenor número: %d \n", menor_numero);
			
			
			
			
return 0;			
}

#include <stdio.h>
#include <locale.h>
#include <limits.h>


#define SIZE 5

int main(){
			setlocale(LC_ALL, "");
			
			
		int numeros[SIZE], maior_numero = INT_MIN, menor_numero = INT_MAX;
		int i;
		
		
		
			printf("Digite um n�mero abaixo. \n");
		for (i = 0; i < SIZE; i++){
	
			printf("Digite o %d n�mero: ", i+1);
			scanf("%d", &numeros[i]);
			
		
		}	
		
			if (numeros[i] > maior_numero){
				maior_numero = numeros[i];
			} 
			if (numeros[i] > menor_numero){
				menor_numero = numeros[i];
			}	
			printf("\nExibindo resultados ao us�ario\n");
			for (i = 0; i < SIZE; i++){
			printf("%d n�mero: %i \n", i+1, numeros[i]);
			
			}
			
			printf("\nMaior n�mero: %d \n", maior_numero);
			printf("\nMenor n�mero: %d \n", menor_numero);
			
			
			
			
return 0;			
}

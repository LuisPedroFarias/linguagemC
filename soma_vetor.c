#include <stdio.h>
#include <limits.h>
#include <locale.h>

#define SIZE 10

int main(){
				setlocale(LC_ALL, "");
				
				
	float soma_positivos = 0;
	float numeros[SIZE];	
	int i;	
	int	numeros_negativos = 0;
	
	
			printf("Informe dez números REAIS. \n");
			
		for(i = 0; i < SIZE; i++){
			printf("\nDigite o %iº número: ", i+1);
			scanf("%f", &numeros[i]);
			
			if (numeros[i] < 0){
				numeros_negativos ++;
			} else if (numeros[i] > 0){
				soma_positivos += numeros[i];
			}
		}
			printf("\n===EXIBINDO RESULTADOS=== \n");
		for(i = 0; i < SIZE; i++){
			printf("%iº números: %.1f \n", i+1, numeros[i]);
			
		}
			printf("\nQuantidade de números positivos: \n", numeros_negativos);
			printf("Soma de números positivos: %.1f \n", soma_positivos);
			
return 0;				
}

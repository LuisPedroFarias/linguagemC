#include <stdio.h>

#include <locale.h>
#include <limits.h>

#define SIZE 6

int main(){
				setlocale(LC_ALL, "");
	
	int numeros[SIZE];
	int i, quantidade_Pares = 0, quantidade_Impares = 0;
	
			printf("Informe seis número \n");
			
		for (i = 0; i < SIZE; i ++){
			printf("\nDigite %dº número: ", i + 1);
			scanf("%d", &numeros[i]);
			
			
		if (numeros[i] % 2 == 0){
			quantidade_Pares ++;
		}	else {
			quantidade_Impares ++;
		}
	}	
			printf("\n=== EXIBINDO RESULTADOS === \n");
		for (i = 0; i < SIZE; i ++){
			printf("%dº número: %d \n", i+1, numeros[i]);
		}
				
return 0;	
}

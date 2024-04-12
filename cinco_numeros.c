#include <stdio.h>
#include <limits.h>
#include <locale.h>

#define SIZE 5


int main(){
				setlocale(LC_ALL, "");
		
	int i;
	float numeros[SIZE];
	
			printf("INFORME CINCO NÚMEROS.\n");
			
		for(i = 0; i < SIZE; i++){
		
			printf("Digite o %iº número: ", i+1);
			scanf("%f", &numeros[i]);
			
			if (numeros[i] < 0){
				numeros[i] = 0;
			}
		}
				
			printf("\n====EXIBINDO RESULTADOS====\n");
		for(i = 0; i < SIZE; i++){
			printf("%iº números: %.1f \n", i+1, numeros[i]);
		}	
		
				
return 0;				
}

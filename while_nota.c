#include <stdio.h>
#include <locale.h>	
#include <string.h>

int main(){
		setlocale(LC_ALL, "");
		
	float nota;
	
	
	do {
		printf("Qual a sua nota ? ");
		scanf("%f", &nota);
	
			
	} while (nota < 0 || nota > 10);
	
	
		printf("=== EXIBINDO RESULTADO ===");
		printf("\nNota: %.1f", nota);
	return 0;
}

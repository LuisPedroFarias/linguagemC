#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");

	int i ;
	float notas, soma, media;
	
	
	for(i = 1; i <=4; i++){
		printf("Digite a %i nota: ", i);
		scanf("%f", &notas);
		
		soma = soma + notas;
}

	media = soma / 4;
	
	
	printf("\n=== EXIBINDO RESULTADOS ===\n");
	printf("\nPares: %.1f \n", media);
	
	
	
return 0;
}

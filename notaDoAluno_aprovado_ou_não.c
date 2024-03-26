#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "portuguese");
		
	char resultado [200];
	int i;
	float notas,soma = 0, media;
	
	
	for(i = 1; i <=3; i++){
		printf("Digite a %i nota: ", i);
		scanf("%f", &notas);
		
		
		soma += notas;
	}
	media = soma / 3;
			if (media >= 7){
			strcpy(resultado, "Aprovado!");
			} else if (notas >=4){
			strcpy(resultado, "Recuperação!");
			} else {
			strcpy(resultado, "Reprovado!");
			}
	
	
	
	
	
			printf("\n=== EXIBINDO RESULTADOS DO ALUNO ===\n");
			printf("\nMédia: %.1f \n", media);
			printf("\nResultado: %s \n", resultado);
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main (){
				setlocale(LC_ALL, "");
	
	int alunos[4][200];
	float notas[4][3];
	float media[4], soma = 0;
	int i, j;
	
	printf("=== SOLICITANDO DADOS AO US�ARIO === \n");
	
	for (i =0; i < 4; i++){
		printf("Digite o nome do %i� aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		
	for (j = 0; j < 3; j++){
		printf("Digite a %i� nota: %.1f ", j+1);
		scanf("%f", &notas[i][j]);
	
	soma +=notas[i][j];
	
	
	}	
	media[i] = soma / 3;
	soma = 0;
	
	
	printf("\n");
	
	}			
		printf("\n=== EXIBINDO DADOS PARA O US�ARIO === \n");
	for (i = 0; i < 4; i++){
		printf("%i] aluno: %s \n", i+1, alunos[i]);
		
		for (j = 0; j < 3; j++){
			printf("%i� nota: %.1f \n", j+1, notas[i][j]);
		}
		printf("M�dia: %.1f \n", media[i]);
		printf("\n");
	}
}

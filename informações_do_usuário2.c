#include <stdio.h>

int main(){
	char nome[200];
	char sexo; 
	int idade;
	float peso;
	
	//Solicitando dados para o usuário.
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin); //limpa o cache de input.
	
	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	//exibindo resultados ao usuário
	
	
	printf("\n=== EXIBINDO RESULTADOS ===\n");
	printf("Nome: %s \n", nome);
	printf("sexo: %c \n", sexo);
	printf("Idade: %i \n", idade);
	printf("Peso: %.2f \n", peso);
	
	getchar();
	
	return 0;
	
}

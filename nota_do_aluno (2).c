#include <stdio.h>

int main(){
	
	char nome [200] = "";
	int  idade, soma;
	float  media,primeiraNota, segundaNota, terceiraNota, quartaNota;
	
	//solicitando informações ao aluno
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	printf("Digite a terceira nota: ");
	scanf("%f", &terceiraNota);
	printf("Digite a quarta nota: ");
	scanf("%f", &quartaNota);
	
	fflush(stdin);
	
	
	//calculando média do aluno.
	
	soma = primeiraNota + segundaNota + terceiraNota + quartaNota ;
	media = soma / 4;
	
	//exibindo resultado para o aluno.
	
	
	printf("\n==== EXIBINDO RESULTADO ====");
	printf("\nNome: %s \n", nome);
	printf("\nIdade: %i \n", idade);
	printf("\nMédia: %4.f \n", media);
	

	getchar();
	
	return 0;
	
	
}

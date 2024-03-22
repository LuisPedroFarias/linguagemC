#include <stdio.h>
#include <locale.h>

int main(){
	
	char sexualidade;
	float peso, altura;
	
	printf("Digite sua sexualidade(M ou F): ");
	scanf("%c", &sexualidade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
		

	switch (sexualidade){
		case 'M' :
			peso = (72.7 * altura)-58; 
		printf("O seu peso ideal é: %.2f \n", peso);
		break;
		
		case 'F' :
			peso = (62.1 * altura) -44.7;
			printf("O seu peso ideal é: %.2f \n ", peso);
		break;	
	}
	
	
	return 0;
}

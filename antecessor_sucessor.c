#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	
	int numero, antecessor, sucessor;
	
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	system("cls || clear "); //limpa o terminal no windows e linux
	
	
	
	
	printf("\n=== EXIBINDO RESULTADOS ===");
	

		printf("\nNúmero informado: %i \n", numero);
		printf("\nAntecessor: %i \n", numero - 1);
		printf("\nSucessor: %i \n", numero + 1);
		 
		 
		 return 0;

}

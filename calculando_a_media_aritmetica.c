#include <stdio.h>
#include <locale.h>


int main (){
			setlocale(LC_ALL, "");
	
	int numero, soma = 0, contador = 0;
	float media;
	
	
	printf("Digite valores inteiros positivos (digite valores negativos para parar): ");
	scanf("%i", &numero);
		while  (1){

	if (numero < 0){
		break;
	}
	
	
	printf("Digite um n�mero \n: ");
	scanf("%i", &numero);
	
	
	
	
	
	
	soma += numero;
	contador ++;
	}
	if (contador == 0){
		printf("Nenhum n�mero foi inserido. \n");
	} else {
		media = (float)soma / contador;
		printf("A m�dia dos n�meros inseridas � %.2f \n", media);
	}
	
	
	return 0;			
}

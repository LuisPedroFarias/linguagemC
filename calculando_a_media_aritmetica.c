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
	
	
	printf("Digite um número \n: ");
	scanf("%i", &numero);
	
	
	
	
	
	
	soma += numero;
	contador ++;
	}
	if (contador == 0){
		printf("Nenhum número foi inserido. \n");
	} else {
		media = (float)soma / contador;
		printf("A média dos números inseridas é %.2f \n", media);
	}
	
	
	return 0;			
}

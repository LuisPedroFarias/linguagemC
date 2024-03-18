#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	
	float salario,quantidadeSalario,salarioMinimo = 1412.00 ;
	
	//solicitando informações ao usúario.
	
	printf("Digite o valor do seu salário: ");
	scanf("%f", &salario);
	
	quantidadeSalario  =    salario / salarioMinimo ;
	
	 system("cls || clear");
	 
	printf("\n=== EXIBINDO RESULTADOS ===\n");
	printf("\nSalario informado: %.2f \n", salario);
	printf("\nQuantidade de salários: %.1f \n", quantidadeSalario);
	
	return 0;
	
	
}

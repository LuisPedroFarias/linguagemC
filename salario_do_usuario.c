#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	
	float salario,quantidadeSalario,salarioMinimo = 1412.00 ;
	
	//solicitando informa��es ao us�ario.
	
	printf("Digite o valor do seu sal�rio: ");
	scanf("%f", &salario);
	
	quantidadeSalario  =    salario / salarioMinimo ;
	
	 system("cls || clear");
	 
	printf("\n=== EXIBINDO RESULTADOS ===\n");
	printf("\nSalario informado: %.2f \n", salario);
	printf("\nQuantidade de sal�rios: %.1f \n", quantidadeSalario);
	
	return 0;
	
	
}

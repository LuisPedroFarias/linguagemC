 #include <stdio.h>
 #include <locale.h>
 #include <ctype.h>
 
 int main(){
 	
 		setlocale(LC_ALL, "");
 	
 
 int codigo;
    int totalFamilias = 0, primeiro = 1, somaFilhos = 0, mediaFilhos = 0; 
    float somaSalarios = 0, mediaSalario = 0, maiorSalario = 0, menorSalario = 0;

    printf("Menu:\n");
    printf("1 - Adicionar fam�lia\n");
    printf("2 - Sair e exibir resultados\n");

    do {
        printf("Digite o c�digo: ");
        scanf("%d", &codigo);

        if (codigo == 1) {
            int numFilhos;
            float salario;

            printf("Digite o n�mero de filhos: ");
            scanf("%d", &numFilhos);

            printf("Digite o sal�rio: ");
            scanf("%f", &salario);

            // Atualizar estat�sticas
            totalFamilias++;
            somaSalarios += salario;
            somaFilhos += numFilhos;

            // Atualizar maior e menor sal�rio
            if (primeiro) {
                maiorSalario = salario;
                menorSalario = salario;
                primeiro = 0;
            } else {
                if (salario > maiorSalario) {
                    maiorSalario = salario;
                }
                if (salario < menorSalario) {
                    menorSalario = salario;
                }
            }
        }
    } while (codigo != 2);

    // Calcular m�dias
    if (totalFamilias > 0) {
        mediaSalario = somaSalarios / totalFamilias;
        mediaFilhos = somaFilhos / totalFamilias;
    }

    // Exibir resultados
    printf("\nResultados:\n");
    printf("a) Total de fam�lias: %d\n", totalFamilias);
    printf("b) M�dia do sal�rio: %.3f\n", mediaSalario);
    printf("c) M�dia do n�mero de filhos: %d\n", mediaFilhos);
    printf("d) Maior sal�rio: %.2f\n", maiorSalario);
    printf("e) Menor sal�rio: %.2f\n", menorSalario);

    return 0;
	
	 }

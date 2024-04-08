 #include <stdio.h>
 #include <locale.h>
 #include <ctype.h>
 
 int main(){
 	
 		setlocale(LC_ALL, "");
 	
 
 int codigo;
    int totalFamilias = 0, primeiro = 1, somaFilhos = 0, mediaFilhos = 0; 
    float somaSalarios = 0, mediaSalario = 0, maiorSalario = 0, menorSalario = 0;

    printf("Menu:\n");
    printf("1 - Adicionar família\n");
    printf("2 - Sair e exibir resultados\n");

    do {
        printf("Digite o código: ");
        scanf("%d", &codigo);

        if (codigo == 1) {
            int numFilhos;
            float salario;

            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);

            printf("Digite o salário: ");
            scanf("%f", &salario);

            // Atualizar estatísticas
            totalFamilias++;
            somaSalarios += salario;
            somaFilhos += numFilhos;

            // Atualizar maior e menor salário
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

    // Calcular médias
    if (totalFamilias > 0) {
        mediaSalario = somaSalarios / totalFamilias;
        mediaFilhos = somaFilhos / totalFamilias;
    }

    // Exibir resultados
    printf("\nResultados:\n");
    printf("a) Total de famílias: %d\n", totalFamilias);
    printf("b) Média do salário: %.3f\n", mediaSalario);
    printf("c) Média do número de filhos: %d\n", mediaFilhos);
    printf("d) Maior salário: %.2f\n", maiorSalario);
    printf("e) Menor salário: %.2f\n", menorSalario);

    return 0;
	
	 }

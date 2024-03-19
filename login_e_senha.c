#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
 		setlocale(LC_ALL, "");
 	
 		char loginSalvo [800] = "Payet";
 		char senhaSalva [800]	= "1234";
 		char login [800];
 		char senha [800];
 		
 		printf("Digite um login: ");
 		scanf("%s", &login);
 		
 		printf("Digite sua senha: ");
 		scanf("%s", &senha);
 		
 		if(strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
 			printf("Bem-vindo!");
		 } else {
		 	printf("Acesso negado!");
		 }
		 
		 return 0;
 	}

/*
	Aluno(a): Luis Henrique Moraes Pequeno.
	Matr�cula: 17045029.
	Turma: CIN01S1.
	Curso: Ci�ncia da Computa��o.
	Mat�ria: Estrutura de Dados.
	Professora: Erika.
*/

#include<stdio.h>
#include<locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int valor;
		
			printf("Informe o valor: ");
			scanf("%d", &valor);
			
			if(valor == 0){
				while(valor == 0){
					printf("Valor Nulo (0)\n");
					printf("Informe outro valor: ");
					scanf("%d", &valor);
				}
			}
			if(valor > 0){
				printf("VERDADEIRO!!\n");
			}else{
				printf("FALSO!!\n");
			}
			
		return 0;			
	}

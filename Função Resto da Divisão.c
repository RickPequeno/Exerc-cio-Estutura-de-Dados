/*
	Aluno: Luis Henrique Moraes Pequeno.
	Matr�cula: 17045029.
	Aluno(a):
	Matr�cula:
	Turma: CIN01S1.
	Curso: Ci�ncia da Computa��o.
	Mat�ria: Estrutura de Dados.
	Professora: Erika.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int rest(int a, int b){
		int resto;
		
		resto = a % b;
		
		return resto;	
	}
	
	void main(){
		int x, a, b;
		
		setlocale(LC_ALL, "Portuguese");
		printf("Informe o primeiro valor: ");
		scanf("%d", &a);
		printf("Informe o segundo valor: ");
		scanf("%d", &b);
		
		x = rest(a,b);
		printf("O resto da divis�o �: %d\n", x);	
	}

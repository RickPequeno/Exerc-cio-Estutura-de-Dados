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
		
		int x=0, y=0, z=0, a=0, b=0;
		
		printf("Informe os dois valores, (Um Positivo e Outro Negativo)\n\n");
		scanf("%d %d", &x, &y);
		
		a = x*2;
		b = 2*(y);
		z = x*y;
		
		printf("O dobro do primeiro valor �: %d\n\n", a);
		printf("E o dobro do segundo valor �: %d\n\n", b);
		printf("A multiplica��o entre os dois valores �: %d\n\n", z);
		
		if(z > 1){
			printf("A multiplica��o entre os valores � positivo\n");
		} else{
			printf("A multiplica��o entre os valores � negativo\n");
		}
		return 0;
	}

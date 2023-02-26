#include<stdio.h>

int main(){
	
	int peso1,peso2,peso3,nota1,nota2,nota3,media;
	printf("Informe a nota 1:\n");
	scanf("%d",&nota1);	
	printf("Informe a peso 1:\n");
	scanf("%d",&peso1);	
	printf("Informe a nota 2:\n");
	scanf("%d",&nota2);	
	printf("Informe a peso 2:\n");
	scanf("%d",&peso2);	
	printf("Informe a nota 3:\n");
	scanf("%d",&nota3);	
	printf("Informe a peso 3:\n");
	scanf("%d",&peso3);	
	
	media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
	
	
	printf("Média poderada: %d.\n",media);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

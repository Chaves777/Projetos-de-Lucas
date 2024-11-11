
#include <stdio.h>
//Elabore um algoritmo que leia 2 matrizes bidimensionais  (4,4). Adicione valores a essas matrizes. Some as duas matrizes e adicione em outra matriz. Imprima a matriz com o resultado.
int main() {
	int matriz1[5][5],matriz2[5][5],soma[5][5];
	int i,j;
	
	printf("1° matriz\n");
	 for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			printf("Digite o [%d][%d] valor; ",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
    printf("2° matriz\n");
 	 for(int i=0; i<5; i++) {
	 	for(int j=0; j<5; j++) {
           	printf("Digite o [%d][%d] valor; ",i,j);
			scanf("%d",&matriz2[i][j]);
		}
	}
 	 for(int i=0; i<5; i++) {
	 	for(int j=0; j<5; j++) {
    		soma[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	printf("Valor na 1° matriz digitado; \n");
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d\n",matriz1[i][j]);
		}
	}
	printf("Valor na 2° matriz digitado; \n");
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d\n",matriz2[i][j]);
		}
	}
	
	printf("Valor da soma das matrizes; \n");
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d\n",soma[i][j]);
		}
	}
}
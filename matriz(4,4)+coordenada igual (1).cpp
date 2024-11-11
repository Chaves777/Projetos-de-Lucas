
#include <stdio.h>
/*Elabore um algoritmo que possua uma matriz (4,4). Preencha a matriz com valores inteiros. Depois corra a matriz e imprima os valores que estão nas casa que possuem coordenadas iguais*/
int main() {
	int matriz1[5][5];
	int i,j;
	
	printf("1° matriz\n");
	 for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			printf("Digite o [%d][%d] valor; ",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("Valor na matriz digitado; \n");
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
		    if(i==j){
			printf("valores com as coordenadas iguais; %d\n",matriz1[i][j]); 
		        
      }
	}
  }
}
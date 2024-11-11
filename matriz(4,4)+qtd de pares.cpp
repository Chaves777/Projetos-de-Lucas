
#include <stdio.h>
/*Elabore um algoritmo que possua uma matriz (4,4) com valores inteiros. Preencha a matriz com valores. Depois mostre na tela a quantidade de valores pares existentes na matriz*/
int main() {
	int matriz1[5][5];
	int i,j,qtd=0;
	
	printf("1° matriz\n");
	 for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			printf("Digite o [%d][%d] valor; ",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
		    if(matriz1[i][j]%2==0){
			qtd++;
		   }
	}
  }
  printf("Quantidade de valores pares na matriz; %d\n",qtd);
}
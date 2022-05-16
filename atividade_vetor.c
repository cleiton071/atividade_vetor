#include<stdio.h>
#include<stdlib.h>

int main(){
	int vnum[10];
	int i=0, posicao=0;
	int busca=-1;
	int result=0;
	
	for(i=0;i<10;i++){
		printf("digite um numero inteiro: \n");
		scanf("%d",&vnum[i]);
	}
	
//	for(i=0;i<10;i++){
//		printf("%d, ",vnum[i]);
//	}
	
	printf("digite o numero que voce queira: \n");
	scanf("%d",&busca);
	
	for (i=0;i<10;i++){
		
		if (busca==vnum[i]){
			result = result + 1;
			posicao=i;
		}
	}
	if (result==0){
		printf("este numero n esta na lista.");
		
	}
	else if(result==1){
		printf("o numero que procura esta na posicao %d .",posicao);
	}
	else
		printf("o numero: %d digitado se repetiu %d vezes e o ultimo esta na posicao: %d", busca, result, posicao);
			
	return 0;
}

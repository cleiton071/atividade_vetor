#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    int inicio=0, p=0, porta[3], janela[3], infop[3], infoj[3];
    float altura[3], largura[3], v_area[3], area_por[3], area_jan[3];
	
	while (inicio!=2){
		printf("vamos começar?\n");
		printf("1- sim\n2- não\n");
		scanf("%d",&inicio);
		switch(inicio){
		    case 1:
			   printf("qual parede deseja inserir / editar as medidas?\n");
	           printf("1- primeira parede \n2- segunda parede\n3- terceira parede \n4- quarta parede \n");
               scanf("%d", &p);
                  switch(p){
		            case 1:
		            	
			            printf("digite a altura da primeira parede\n");
		                scanf("%f", &altura);
		                printf("digite a largura da primeira parede\n");
		                scanf("%f", &largura);
		                
		                v_area[0] = largura;
		                v_area =(area_par*altura);
		             
		                printf("informe a quantidade de portas na parede: \n");
		                scanf("%d", &porta);
		                area_por= 1.52*porta;
		                area_por>= (area_par/2);
		             		   
		                printf("a area de porta é grande demais para a parede.");
		                
		             	break;
		            case 2:
		             	break;
					 }
	                }
		       break;
		    case 2:
		       printf("fim\n");
		       break;
		    default:
		    	printf("opção invalida\n");
		    	break;
		    	
	    }
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    float p[3], altura[3], largura[3], area[3];
    char info_p[3], info_j[3];
    int porta[3], janela[3];
	
	while(p !=4){
	
	    printf("qual parede deseja inserir / editar as medidas?\n");
	    printf("1- primeira parede \n2- segunda parede\n3- terceira parede \n4- quarta parede \n");
        scanf("%f", &p);
        
    	switch(p){
		    case 1:
			   printf("digite a altura da primeira parede\n");
		       scanf("%f", &altura[0]);
		       printf("digite a largura da primeira parede\n");
		       scanf("%f", &largura[0]);
		       printf("esta parede tem porta(s)?\n");
		       scanf("%s", &infop);
		       
		       if(info_p[0]="sim")
		         (altura[0]-0.3)>=1,9
		         printf("quantas portas tem?\n");
		         scanf("%d",&porta[0]);
		       else(info_p="nao")
		       
		       if(info_p[0]="sim")
		         printf("quantas portas tem?\n");
		         scanf("%d",&porta[0]);
		       else(info_p="nao")
		       break;
		    case 2:
		       printf("o maior numero digitado foi: ""%d", m);
		       break;
	    }
    }
    return 0;
}

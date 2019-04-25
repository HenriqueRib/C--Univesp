#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char nome[80];
	float soma[10];
	int op,i,dd,j,nota;
	float c,x,y,resultado;
	resultado = 0;
	printf ("Digite o seu nome : ");
	gets (nome);		
	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("####################\n");
	printf("######UNIVESP#######\n");
	printf("####################\n");
	printf("\n\nDigite apenas o numero da opção e aperte Enter \n\n");
	do {
		printf("1 - Descubra qual foi a sua nota nesse bimestre !\n");
		printf("2 - Descubra se voçê passou nesse bimestre !\n");
		printf("3 - Agradecimento.\n");
		printf("0 - Sair.\n");
		scanf ("%d", &op);
		system("cls");
	   	switch (op){
		   	case 1 :
		   		printf("%s \n", nome);
		   		printf("Digite quantas atividades voçê fez: ");
		   		scanf("%d", &dd);
				c=0;
				printf("Em caso de decimal use a , \n");
				for( i = 1;  i <= dd ; i++){	
		    	printf ("Digite sua nota da atividade %d : \n", i);
		    	scanf ("%f", &soma[i]);
		    	c = soma[i] + c ;}
				system("cls");
				printf ("Sua nota total das atividades foi: \n %.2f \n", c);
				x = 0.40 * c / dd ;
				printf ("Sua media das atividades foi de \n %.2f \nAgora digite a sua nota da prova : ", x);
				scanf ("%d", &nota);
				y = 0.60 * nota ;
				printf("\nSua media da prova foi de \n %.2f .\n", y);
   				resultado = (x + y ) ;
    			printf ("A sua nota no final foi de: %.2f \n \n ", resultado);
    			system("pause"); 
    			system("cls");
			break;
			case 2 :
				if (resultado == 0 ) printf ("Por favor digite primeiro a suas notas !\n");
				else{
				
				printf ("A sua nota foi de : %.2f \n", resultado);
   				 if ( resultado >= 5 ){
    				printf ("Parabens ! %s voce passou.\n", nome);}
				else {
					printf ("Deu ruim. Vai ter que se esforcar da proxima vez.\n");
				} }
					system("pause"); 
				break;
			case 3 :
				printf ("Se voçê deseja contribuir mesmo que seja com alguma sugestão ou opinião \n Por favor envie um e-mail para ribeiro.henriquem@gmail.com .\n Software em teste e em desenvolvimento. \n ");
				system("pause"); 
    			system("cls");
				
				break;
	}	}
  while ( op != 0);
	printf("FIM DO PROGRAMA\n");
	return (0);
}
	


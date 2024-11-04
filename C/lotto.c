#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int numero_utente; //input dell utente
    srand(time(NULL)); //set randomizzazione
    int num1 = rand()%90+1; //generazione numero random  
    int num2 = rand()%90+1; //generazione numero random
    
    //int num1 = 2;
	//int num2 = 3;
    int gamble = 1;
    int guess1,guess2,credito_messo;
    
    puts("BENVENUTI AL GIOCO DEL LOTTO!");
    
    //input soldi
    do{
	    puts("quanto credito vuoi giocare?");
	    scanf("%d",&credito_messo);	
	}while(!credito_messo);
	
	
	//main del gioco
    while(credito_messo>0 && gamble!=0){
    	printf("credito rimanente: %d\n", credito_messo);
	    puts("inserisci 2 numeri:");
	    scanf("%d",&guess1);
	    scanf("%d",&guess2);
	    
	    if(guess1 == num1 && guess2==num2||guess2==num1&&guess1==num2){
	    	puts("HAI VINTO!! :) ");
	    	credito_messo=credito_messo*250;
	    	puts("vuoi continuare a vincere? 1 = si, 0 = no");
	    	printf("credito rimanente: %d\n", credito_messo);
	    	scanf("%d",&gamble);
	    		
		}else{
			credito_messo--;
			puts("hai perso :( ");
			puts("il 90% dei giocatori si ferma prima della grande vincita, vuoi riprovare? 1 = si, 0 = no");
			printf("credito rimanente: %d\n", credito_messo);
			scanf("%d",&gamble);
		}
		
	}
	
	if(!credito_messo){
		puts("Hai finito i soldi, torna a trovarci");
	}else{
		puts("Torna a trovarci");
	}
	
	return 0;
}


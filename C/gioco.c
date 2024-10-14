/*
Scrivi un programma che scelga un numero fisso (ad esempio, 10) 
e chieda all'utente di indovinarlo. Il programma deve dire 
se il numero inserito dall'utente è maggiore, minore o uguale al numero da indovinare.
*/

#include "stdio.h"
#include <time.h>
#include <stdlib.h>


int main(){

	int numero_utente;
	
	srand(time(NULL));   // creo un numero pseudorandomico basato sul tempo da 0 a 89
	int r = rand() % 90; 
	
	
	puts("indovina il numero;");
	scanf("%d",&numero_utente);
	
	while(1==1){
		if(numero_utente>r){
			printf("il numero da indovinare e' piu' piccolo, riprova\n");
			scanf("%d",&numero_utente);
		}else if(numero_utente<r){
			printf("il numero da indovinare e' piu' grande, riprova\n");
			scanf("%d",&numero_utente);
		}else{
			printf("HAI VINTO DAJEEE\n");
			break;
		}
	}
	
	return 0;
	
}

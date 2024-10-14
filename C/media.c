/*
Scrivi un programma che chieda all'utente di inserire tre voti (numeri interi) e calcoli la media. 
Se la media è maggiore o uguale a 6, stampa "Promosso", altrimenti stampa "Bocciato".
*/


#include <stdio.h>

int main(){
	
	int voto1,voto2,voto3,media;
	
	puts("inserisci 3 voti");
	
	scanf("%d",&voto1);
	scanf("%d",&voto2);
	scanf("%d",&voto3);
	
	media = (voto1+voto2+voto3)/3;
	
	if(media>=6){
		puts("PROMOSSO");
	}else{
		puts("BOCCIATO");
	}
	
	return 0;
}

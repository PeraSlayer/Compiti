/*
Scrivi un programma che chieda all'utente la sua età e determini se può guidare o no. 
(Supponiamo che l'età minima per guidare sia 18 anni).
*/
#include <stdio.h>

int main(){
	int n;
	
	puts("inserisci la tua eta'");
	scanf("%d",&n);
	
	if(n>=18){
		puts("Puoi guidare");
		
	}else{
		puts("NON puoi guidare");
	}
	
	return 0;
}

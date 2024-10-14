/*
Scrivi un programma che chieda all'utente di inserire un numero intero e controlli se è pari o dispari.
*/


#include <stdio.h>

int main(){
	
	int numero;
	
	puts("inserisci un numero");
	
	scanf("%d",&numero);
	
	if(numero%2==0){
		puts("pari");
	}else{
		puts("dispari");
	}
	
	return 0;
}

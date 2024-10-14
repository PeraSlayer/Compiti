/*
	scrivi un numero e stampa i 3 successivi
*/


#include <stdio.h>

int main(){
	
	int n;
	puts("inserisci un numero");
	scanf("%d",&n);
	
	printf("%d\n",++n);
	printf("%d\n",++n);
	printf("%d\n",++n);
	

	return 0;
}

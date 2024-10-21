#include <stdio.h>

int main(){
	int m,n,o;
	puts("inserisci 3 numeri");
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&o);
	if( m<n && n<o ){
		printf("sono in ordine cresente");
	}
	
	return 0;
	
}

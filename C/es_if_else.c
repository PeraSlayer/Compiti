#include <stdio.h>

int main(){
	
	int temp;
	puts("inserisci un numero:"); //modo alt per stampare
	scanf("%d",&temp); //input di temp
	
	
	//verifico se temp è minore, uguale o maggiore a 0.
	
	/*
	
	Con l' if tendo a escludere o includere tutti i casi possibili
	quindi se:
	
	temp <0
	temp > 0
	temp = 0
	
	*/
	if(temp<0){	
		puts("numero minore di 0");
	}else if(temp>0){
		puts("numero maggiore di 0");
	}else{
		puts("numero uguale a 0");
	}	
	
	return 0;
}

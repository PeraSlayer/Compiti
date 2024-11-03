// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_utente; //input dell utente
    srand(time(NULL)); //set randomizzazione
    int r = rand()%100+1; //generazione numero random
    
    puts("BENVENUTO SU INDOVINA IL NUMERO\nHAI 5 TENTATIVI PER INDOVINARE UN NUMERO DA 1 A 100");
    int i; //variabile ciclo
    for(i = 1; i<=5; ++i){
        printf("tentativo %d\n",i);
        scanf("%d",&numero_utente);
        //controllo input utente
        if(numero_utente<r){
            puts("numero troppo piccolo!");
        }else if(numero_utente>r){
            puts("numero troppo grande!");
        }else{
            puts("BRAVO HAI INDOVINATO, HAI VINTO YEEE");
            return 0;
        }
    }
    
    printf("il numero era %d, prossima volta sarai + fortunato!",r);
    return 0;
}
